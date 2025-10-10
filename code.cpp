#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define prec(x)       fixed<<setprecision(x)
#define rall(x)       (x).rbegin(),(x).rend()
#define testcase      cout << "Case " << cs++ << ":"
//to_string(x)             sqrtl()   stol(s);

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif
void dfs1(int u, vector<vector<int>> &g, vector<int> &vis, stack<int> &st) {
    vis[u] = 1;
    for (int v : g[u])
        if (!vis[v])    dfs1(v, g, vis, st);
    st.push(u);
}

void dfs2(int u, vector<vector<int>> &rg, vector<int> &vis, vector<int> &comp, int cid, int &cnt) {
    vis[u] = 1;
    comp[u] = cid;
    cnt++;
    for (int v : rg[u]){
        if (!vis[v])    dfs2(v, rg, vis, comp, cid, cnt);
    }
}

ll dfs_dp(int u, int k, vector<vector<int>> &dag, vector<ll> &sz, vector<vector<ll>> &memo) {
    if (k == 0) return 0;
    if (memo[u][k] != -1) return memo[u][k];

    ll res = sz[u];
    for (int v : dag[u]) {
        res = max(res, sz[u] + dfs_dp(v, k - 1, dag, sz, memo));
    }
    return memo[u][k] = res;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> g(n + 1), rg(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        rg[v].push_back(u);
    }

    vector<int> vis(n + 1, 0);
    stack<int> st;
    for (int i = 1; i <= n; i++)
        if (!vis[i]) dfs1(i, g, vis, st);

    fill(all(vis), 0);
    vector<int> comp(n + 1, -1);
    vector<ll> sz_scc;
    int cid = 0;

    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (vis[u]) continue;
        int cnt = 0;
        dfs2(u, rg, vis, comp, cid, cnt);
        sz_scc.push_back(cnt);
        cid++;
    }

    int C = cid;
    debug(tuple(cid, sz(sz_scc)));

    vector<vector<int>> dag(C);
    for (int u = 1; u <= n; u++) {
        for (int v : g[u]) {
            if (comp[u] != comp[v])
                dag[comp[u]].push_back(comp[v]);
        }
    }
    debug(dag);

    vector<vector<ll>> memo(C, vector<ll>(k + 1, -1));
    ll ans = 0;
    for (int i = 0; i < C; i++) {
        ans = max(ans, dfs_dp(i, k, dag, sz_scc, memo));
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
