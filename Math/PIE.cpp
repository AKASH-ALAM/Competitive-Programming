//∣A∪B∪C∣ = ∣A∣+∣B∣+∣C∣ − ∣A∩B∣ − ∣A∩C∣ − ∣B∩C∣ + ∣A∩B∩C∣
ll PIE(vector <int> &v, int n, ll m) { // Principle of Inclusion and Exclusion - PIE
    ll even = 0, odd = 0;
    for (int mask = 1; mask < (1LL << n); mask++) {
        ll product = 1;
        for (int i = 0; i < n; i++) {
            if (mask & (1LL << i)) product *= v[i];
        }
        if (__builtin_popcountll(mask) & 1) odd += m / product;
        else even += m / product;
    }
    return odd - even;
}//O(2^n * n)