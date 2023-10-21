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
//stol(s);  to_string(x);
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

int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {  0, 0, -1, 1, -1, 1, -1, 1};


string DecimalToBinary(ll num) {
	string str;
	while (num) {
		if (num & 1LL) str += '1';
		else str += '0';
		num >>= 1LL; // Right Shift by 1
	}
	return str;
}

void solve() {
	ll n;	cin >> n;
	vector <string> grid;
	ll limit = 0;

	for (int i = 0; i < n ; i++) {
		ll x;
		cin >> x;
		string s = DecimalToBinary(x);
		limit = max(limit, (ll) sz(s));
		grid.push_back(s);
	}
	if (limit == 0) {
		cout << "Yeeee! ice-cream." << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		while (sz(grid[i]) < limit) grid[i].push_back('0');
		reverse(all(grid[i]));
	}

	// for (auto it : grid) cout << it << endl;

	int m = limit;
	queue <pair<int, int>> q;
	q.push({0, 0});
	vector <vector<bool>> vis(n, vector <bool> (m, 0));
	vis[0][0] = 1;
	char init = grid[0][0];
	bool ans = 0;

	while (!q.empty()) {
		auto [r, c] = q.front();
		q.pop();
		if (r == n - 1 and c == m - 1) {
			ans = 1;
			break;
		}
		for (int i = 0; i < 4; i++) {
			int nrow = r + dx[i];
			int ncol = c + dy[i];
			if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < m and !vis[nrow][ncol] and init == grid[nrow][ncol]) {
				vis[nrow][ncol] = 1;
				q.push({nrow, ncol});
			}
		}
	}

	if (ans) {
		cout << "Yeeee! ice-cream." << endl;
	} else {
		cout << "Let's make ice-cream." << endl;
	}

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
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}