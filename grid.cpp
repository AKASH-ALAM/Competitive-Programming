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

int bfs(int row, int col, vector <vector <bool>> &vis, vector <vector <char>> &grid) {

    int n = sz(grid), m = sz(grid[0]);
    queue <pair<pair<int, int>, int>> q;
    q.push({{row, col}, 0});
    vis[row][col] = 1;
    int cnt = INT_MAX, dis, k;

    while (!q.empty()) {
        row = q.front().first.first;
        col = q.front().first.second;
        dis = q.front().second;
        q.pop();

        if (row == n - 1 and col == m - 1)  cnt = min(cnt, dis);
        k = grid[row][col] - '0';

        int dx[] = { -k, k, 0, 0};
        int dy[] = {0, 0, k, -k};

        for (int i = 0; i < 4; i++) {
            int nrow = row + dx[i];
            int ncol = col + dy[i];
            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and !vis[nrow][ncol]) {
                q.push({{nrow, ncol}, dis + 1});
                vis[nrow][ncol] = 1;
            }
        }
    }

    if (cnt != INT_MAX) return cnt;
    else return 0;
}


void solve() {
    int n, m;   cin >> n >> m;
    vector <vector <char>> grid(n, vector <char> (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> grid[i][j];
    }
    vector <vector <bool>> vis(n, vector <bool> (m));
    int cnt = bfs(0, 0, vis, grid);

    if (cnt) cout << cnt << endl;
    else cout << "IMPOSSIBLE" << endl;
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