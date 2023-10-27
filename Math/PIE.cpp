//∣A∪B∪C∣ = ∣A∣+∣B∣+∣C∣ − ∣A∩B∣ − ∣A∩C∣ − ∣B∩C∣ + ∣A∩B∩C∣
ll PIE(vector <int> &v, int n, ll m) { // Principle of Inclusion and Exclusion - PIE
    ll even = 0, odd = 0;
    for (int mask = 1; mask < (1LL << n); mask++) {
        ll tmp = m;
        for (int i = 0; i < n; i++) {
            if (mask & (1LL << i)) tmp /= v[i];
        }
        if (__builtin_popcountll(mask) & 1) odd += tmp;
        else even += tmp;
    }
    return odd - even;
}//O(2^n * n)