const int MOD = 1e9 + 7, MX = 1e6 + 2;

ll BigMod (ll a, ll b, ll m) { 
	a %= m; ll res = 1; 
	while (b > 0) {
		if (b & 1) res = res * a % m; 
		a = a * a % m; 
		b >>= 1;
	} 
	return res;
}
ll fact[MX], inv[MX];

void precalc() { // call the precalc function first
	fact[0] = 1;
	for (ll i = 1; i < MX; i++) fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
	for (int i = 0; i < MX; i++) inv[i] =  BigMod(fact[i], MOD - 2, MOD); //mod inverse
}

ll nCr(ll n, ll r) {
	ll up = fact[n] % MOD; // n!
	ll down = ((inv[r]) * (inv[n - r])) % MOD; // inv[r!]*inv[(n-r)!]
	return (up * down) % MOD;
}
