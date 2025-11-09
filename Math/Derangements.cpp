ll Derangements(ll n) {
    if (n == 1 or n == 2) return n - 1;
    // Variable for just storing previous values
    ll a = 0, b = 1;
    // using above recursive formula
    for (ll i = 3; i <= n; ++i) {
        ll cur = ((i - 1) * (a + b)) % MOD; // D[n] = (n - 1) * (D[n - 1] + D[n - 2]);
        a = b, b = cur;
    }
    return b;
}
