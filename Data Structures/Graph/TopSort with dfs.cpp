void dfs(int node, vector <int> &vis, stack <int> &st, vector <int> *grid) {
    vis[node] = 1;
    for (auto it : grid[node]) {
        if (!vis[it]) dfs(it, vis, st, grid);
    }
    st.push(node);
}

void solve() {
    int n, m;
    while (cin >> n >> m, n or m) {
        vector <int> grid[n + 1];

        for (int i = 1; i <= m; i++) {
            int u, v;   cin >> u >> v;
            grid[u].push_back(v);
        }

        vector <int> vis(n + 1, 0);
        stack <int> st;
        vector <int> ans;

        for (int i = 1; i <= n; i++) {
            if (!vis[i]) dfs(i, vis, st, grid);
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        for (int i = 0; i < sz(ans); i++) cout << ans[i] << " \n"[i == sz(ans) - 1];
    }
}