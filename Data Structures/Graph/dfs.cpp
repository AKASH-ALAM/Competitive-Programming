
void dfs(int node, vector <int> *adj, vector <int> &ls, bool *visited) { // O(V + E)
    visited[node] = 1;
    ls.push_back(node);
    //traversal all it's neighbours
    for (auto it : adj[node]) {
        if (!visited[it]) dfs(it, adj, ls, visited);
    }
}

void solve() {
    int vertex, edge;   cin >> vertex >> edge;
    vector <int> adj_list[vertex];
    vector <int> ls;
    bool visited[vertex] = {0};

    int a, b;
    for (int i = 0; i < edge; i++) {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int start = 0;
    dfs(start, adj_list, ls, visited);
    for (auto it : ls) cout << it << " ";
    cout << endl;
}