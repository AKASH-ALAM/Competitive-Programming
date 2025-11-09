void Hierholzer(){
    int n, m;   cin >> n >> m;
    vector <pair<int,int>> g[n+1];

    for(int i = 0; i < m; i++){
        int u, v;   cin >> u >> v;
        g[u].push_back({v, i});
        g[v].push_back({u, i});
    }

    vector <int> path;
    vector <bool> vis(m+1, 0);
    for(int i = 1; i <= n; i++) {
        if(sz(g[i]) % 2) { // is degree is odd
            cout << "IMPOSSIBLE" << endl;
            return;
        }
    }
    stack <int> st; st.push(1);

    while(!st.empty()){ // Hierholzer’s algorithm
        int u = st.top();
        if(!g[u].empty()){
            auto [v, i] = g[u].back();
            g[u].pop_back();
            if(vis[i]) continue;
            vis[i] = true;
            st.push(v);
        } else {
            path.push_back(u);
            st.pop();
        }
    }

    if(sz(path) == m+1) {
        for(auto it : path) cout << it << ' ';
        cout << endl;
    } else  cout << "IMPOSSIBLE" << endl;
}