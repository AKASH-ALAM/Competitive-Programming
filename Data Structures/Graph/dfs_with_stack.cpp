stack <int> st;
vector <int> dir;

void dfs(vector <int> *g, bool *visit, int *dis) {
    while (!st.empty()) {
        int node = st.top();
        dir.push_back(node);
        st.pop();
        for (int adj : g[node]) {
            if (visit[adj]) continue;
            st.push(adj);
            visit[adj] = 1;
            dis[adj] = dis[node] + 1;
        }
    }
}

void solve() {
    int n;  cin >> n;
    vector <int> g[n];
    for (int i = 0; i < n; i++) {
        int u, v;   cin >> u >> v;
        g[u].push_back(v);
    }

    bool visit[n] = {0};
    int dis[n];

    st.push(0);
    visit[0] = 1;
    dis[0] = 0;

    dfs(g, visit, dis);

    for (auto it : dir) cout << it << " ";
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "node " << i << ": " << dis[i] << endl;
    }
}