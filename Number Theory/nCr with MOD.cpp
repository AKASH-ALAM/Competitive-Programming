#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e6 + 3;
const int MX = 1e6 + 2;
using ll = long long;

ll BigMod(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}
ll ModInverse(ll number, ll mod) {return BigMod(number, mod - 2, mod);}
ll fact[MX];
ll inv[MX];
void precalc() {
	fact[0] = 1;
	for (int i = 1; i < MX; i++) {
		fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
	} for (int i = 0; i < MX; i++) {
		inv[i] =  ModInverse(fact[i], MOD);
	}
}

int main() {
	precalc();
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		ll n, r, ans;
		cin >> n >> r;
		ll u = fact[n] % MOD; // n!
		//ll v = ((fact[r]) * (fact[n - r])) % MOD; // r!*(n-r)!
		// ans = (u*ModInverse(fact[v], MOD))
		ll v = ((inv[r]) * (inv[n - r])) % MOD; // inv[r!]*inv[(n-r)!]
		ans = (u * v) % MOD;
		cout << "Case " << i << ": " << ans << endl;
	}
	return 0;
}
