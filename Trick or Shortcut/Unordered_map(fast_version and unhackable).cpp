#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

/*It seems that sometimes unordered_map becames so slow
but it can improve with this two lines of code:*/

unordered_map <int, int>mp;
mp.reserve(1024); //(1 << n)
mp.max_load_factor(0.25);

/*With this two lines unordered_map become about 10 times faster.
You can replace 1024 with another suitable power of two.
(it depends on number of insert s you will do).
Adding all this together, we have our safe custom hash function:*/

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

//Now we can simply define our unordered_map or our gp_hash_table as follows:

unordered_map <long long, int, custom_hash> safe_map;
gp_hash_table <long long, int, custom_hash> safe_hash_table; //policy based data data structure

//Once we use these in our program above, it runs very quickly:

x = 107897: 0.035 seconds, sum = 2666686666700000;
x = 126271: 0.031 seconds, sum = 2666686666700000;

== == =
    Used: 109 ms, 9204 KB;