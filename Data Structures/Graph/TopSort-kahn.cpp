int const N = 100;
int edge, node;
int degree[N];
vector <int> g[N];

void top_sort() { // O(V + E)
    queue <int> nodes;
    for (int i = 1; i <= node; i++) {
        if (degree[i] == 0) nodes.push(i);
    }

    int access = 0;
    while (!nodes.empty()) {
        int u = nodes.front();
        cout << u << " ";
        nodes.pop();
        access++;
        for (auto v : g[u]) {
            degree[v]--;
            if (degree[v] == 0) nodes.push(v);
        }
    }

    if (access == node) cout << endl;
}

void solve() {
    cin >> edge >> node;
    for (int i = 0; i < edge; i++) {
        int u, v;   cin >> u >> v;
        g[u].push_back(v);
        degree[v]++;
    }

    top_sort();
}