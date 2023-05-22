int const N = 100;
int edge, node;
bool vis[N];
vector <int> g[N];
stack <int> nodes;

void top_sort(int u) {  // O(V + E)
    vis[u] = true;

    for (auto v : g[u]) {
        if (vis[v]) continue;
        top_sort(v);
    }

    nodes.push(u);
}

void solve() {
    cin >> edge >> node;
    for (int i = 0; i < edge; i++) {
        int u, v;   cin >> u >> v;
        g[u].push_back(v);
    }

    top_sort(2);
    top_sort(1);
    while (!nodes.empty()) {
        cout << nodes.top() << " ";
        nodes.pop();
    }
}