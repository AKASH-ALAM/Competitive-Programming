struct custom_hash { // for avoid hacking (it's little bit slow but not very slow, it's will run under 1 sec)
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

void solve() {
    unordered_map <int, bool, custom_hash> mp;
    mp.reserve(1 << ((n / 2) + 1));
    mp.max_load_factor(0.25); // line 18 and 19 is for fast maping
}
