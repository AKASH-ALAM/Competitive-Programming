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

void solve() {
	int n, m;	cin >> n >> m;
	vector <vector<char>> grid(n + 1, vector <char>(m + 1));
	int rw = 0, cl = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 'A') {
				rw = i, cl = j;
			}
		}
	}
	vector <vector<bool>> vis(n + 1, vector <bool>(m + 1));
	vector <vector<char>> path(n + 1, vector <char>(m + 1, '.'));
	queue <pair<int, int>> q;
	path[rw][cl] = 'A';
	q.push({rw, cl});
	vis[rw][cl] = 1;
	int sr = 0, sc = 0;
	bool found = 0;

	while (!found and !q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int row = r + dx[i];
			int col = c + dy[i];
			if (row >= 0 and row < n and col >= 0 and col < m and grid[row][col] != '#' and !vis[row][col]) {
				if (col == c) {
					if (row < r) path[row][col] = 'U';
					else path[row][col] = 'D';
				}
				else if (row == r) {
					if (col < c) path[row][col] = 'L';
					else path[row][col] = 'R';
				}
				if (grid[row][col] == 'B') {
					sr = row;
					sc = col;
					found = 1;
				}
				vis[row][col] = 1;
				q.push({row, col});
			}
		}
	}

	list <char> ans;
	while (path[sr][sc] != 'A' and found) {
		ans.push_front(path[sr][sc]);
		if (path[sr][sc] == 'U') sr++;
		else if (path[sr][sc] == 'D') sr--;
		else if (path[sr][sc] == 'R') sc--;
		else if (path[sr][sc] == 'L') sc++;
	}

	if (found) {
		cout << "YES" << endl;
		cout << sz(ans) << endl;
		for (auto it : ans) cout << it;
		cout << endl;
	}
	else cout << "NO" << endl;
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