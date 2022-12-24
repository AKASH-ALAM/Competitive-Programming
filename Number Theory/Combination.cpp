/**  Author  : Pnictogen
 **  Algo    :		**/

#include <bits/stdc++.h>
using namespace std;
#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld) - 1);
const int MOD = 1e6 + 3;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e5;

#ifdef LOCAL
#include"debug.h"
#else
#define debug(...)
#endif
int cs = 1;

const int N = 1e6;
ll f[N + 5];
ll inv[N + 5];

ll BigMod(ll B, ll P, ll M) {
	ll R = 1;
	while (P > 0) {
		if (P % 2 == 1) {
			R = (R * B) % M;
		}
		P /= 2;
		B = (B * B) % M;
	}
	return R;
}

void fact() {
	f[0] = 1;
	for (int i = 1; i <= N; i++) {
		f[i] = (f[i - 1] * i) % MOD;
	}

	for (int i = 0; i <= N; i++) {
		inv[i] = BigMod(f[i], MOD - 2, MOD);
	}
}


void solve() {
	int n, r;	cin >> n >> r;
	ll cal = (inv[r] * inv[n - r]) % MOD;
	cal = (cal * f[n]) % MOD;
	cout << "Case " << cs++ << ": ";
	cout << cal << endl;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	fact();
	int t = 1;	cin >> t;

	while (t--) {
		solve();
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}