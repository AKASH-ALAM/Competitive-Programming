
vector <int> BFS(int n, vector <int> adj_list[]) { // O(V + E)
    vector <int> level(n + 1, 0);
    queue <int> q;
    q.push(1);
    level[1] = 0;
    int node;

    while (!q.empty()) {
        node = q.front();
        q.pop();
        for (auto it : adj_list[node]) {
            if (!level[it] and it != 1) {
                level[it] += level[node] + 1;
                q.push(it);
            }
        }
    }
    return level;
}

void solve() {
    int n, e;   cin >> n >> e;
    vector <int> adj_list[n + 1];

    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    cout << "Node -> neighbour node" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (auto it : adj_list[i]) cout << it << " ";
        cout << endl;
    } cout << endl;

    vector <int> path;
    path = BFS(n, adj_list);

    for (int i = 1; i <= n; i++) {
        cout << "Shortest path of (" << i << ") is : " << path[i] << endl;
    }
}
