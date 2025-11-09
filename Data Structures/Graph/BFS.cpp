
vector <int> BFS(int v, vector <int> adj_list[]) { // O(node + edge)
    bool mark[v + 1] = {0};
    queue <int> q;
    vector <int> store;

    q.push(1); // source node
    mark[1] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        store.push_back(node);
        for (auto it : adj_list[node]) {
            if (!mark[it]) {
                mark[it] = 1;
                q.push(it);
            }
        }
    }
    return store;
}

void solve() {
    int node, edge; cin >> node >> edge;

    vector <int> adj_list[node + 1];
    int a, b;

    for (int i = 0; i < edge; i++) {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    vector <int> arry;
    arry = BFS(node, adj_list);
    for (auto it : arry) cout << it << " ";
    cout << endl;
}