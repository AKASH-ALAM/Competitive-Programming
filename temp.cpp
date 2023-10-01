#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define sz(x)         (int)x.size()
#define toint(a)      atoi(a.c_str())
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define mem(a,x)      memset(a,x,sizeof(a))
#define testcase      cout << "Case " << cs++ << ":"
string  tostr(int n)  {stringstream rr; rr << n; return rr.str();}
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

string c[] = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};

void solve() {
	string s;	cin >> s;
	vector <int> fre(26, 0);
	for (auto ch : s) {
		fre[ch - 'a']++;
	}
	int ans = 0;
	for (int mask = 0; mask < (1LL << 15); mask++) {
		auto tmp = fre;
		bool ok = true;
		for (int i = 0; i < 15; i++) {
			if (mask & (1LL << i)) {
				for (auto x : c[i]) {
					if (tmp[x - 'a'] >= 1) {
						tmp[x - 'a']--;
					}
					else {
						ok = false;
						break;
					}
				}
			}
		}
		if (ok) {
			ans = max(ans, __builtin_popcountll(mask));
		}
	}

	cout << ans << endl;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
#endif

	unsyncIO;
	int t = 1;
	cin >> t;

	//cin.ignore();
	while (t--) {
		solve();
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}