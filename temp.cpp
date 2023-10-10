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
//stol(s);  x.to_string();
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

bool detect(int n, vector <int> *g, int src) {
	queue <pair<int , int>> q; // node, parent
	vector <bool> vis(n + 1, 0);
	q.push({src, -1});
	vis[src] = 1;
	while (!q.empty()) {
		auto [node, parent] = q.front();
		q.pop();
		for (auto adjnode : g[node]) {
			if (!vis[adjnode]) {
				vis[adjnode] = 1;
				q.push({adjnode, node});
			} else if (parent != adjnode) return true;
		}
	}
	return false;
}
void solve() {
	int n, m;  cin >> n >> m;
	vector <int> g[n + 1];
	for (int i = 0; i < m; i++) {
		int u, v;   cin >> u >> v;
		g[u].push_back(v);
	}

	if (detect(n, g, 1)) cout << "Yes" << endl;
	else cout << "No" << endl;
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