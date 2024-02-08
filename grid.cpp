#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define gcd(x,y)      __gcd(x,y)
#define sz(x)         (int)x.size()
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)
//stol(s);sqrtl()     to_string(x);
const ld PI = acos((ld) - 1);
const ll INF = 2e18 + 1;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif


/*struct custom_hash {
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
};*/


void solve() {
    int n, x;   cin >> n >> x;
    int n1 = n / 2, n2 = n - (n / 2);

    vector <int> v1(n1) , v2(n2);
    ll sum = 0, ans = 0;

    for (int i = 0; i < n1; i++) cin >> v1[i];
    for (int i = 0; i < n2; i++) cin >> v2[i];

    gp_hash_table<ll, int> mp;

    for (int mask = 0; mask < (1 << n1); mask++) {
        for (int i = 0; i < n1; i++) {
            if (mask & (1 << i)) sum += v1[i];
        }
        mp[sum]++;
        sum = 0;
    }

    for (int mask = 0; mask < (1 << n2); mask++) {
        for (int i = 0; i < n2; i++) {
            if (mask & (1 << i))  sum += v2[i];
        }
        if (mp.find(x - sum) != mp.end())  ans += mp[x - sum];
        sum = 0;
    }

    cout << ans << endl;
}

int main() {

#ifdef LOCAL
    clock_t tStart = clock();
#endif

    unsyncIO;
    int t = 1;
    //cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << prec(5) << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}