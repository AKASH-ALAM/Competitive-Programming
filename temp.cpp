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

int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {  0, 0, -1, 1, -1, 1, -1, 1};
int n, m;

void dfs(int r, int c, vector <vector<bool>> &vis, vector <vector <char>> &grid) {
	vis[r][c] = 1;

	for (int i = 0; i < 4; i++) {
		int row = r + dx[i];
		int col = c + dy[i];
		if (row >= 0 and row < n and col >= 0 and col < m and grid[row][col] == '.' and !vis[row][col])
			dfs(row, col, vis, grid);
	}
}

void solve() {
	cin >> n >> m;
	vector <vector<char>> grid(n, vector <char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> grid[i][j];
	}

	int cnt = 0;
	vector <vector<bool>> vis(n, vector <bool>(m, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == '.' and !vis[i][j]) {
				dfs(i, j, vis, grid);
				cnt++;
			}
		}
	}

	cout << cnt << endl;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
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