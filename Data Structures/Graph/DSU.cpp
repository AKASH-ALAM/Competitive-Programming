struct DSU {        // O(4xalpha) = Constant time
    vector <int> size, parent;
    DSU (int n) {
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int Find (int node) {
        if (node == parent[node]) return node;
        return parent[node] = Find(parent[node]);
    }

    void Union (int u, int v) {
        u = Find(u), v = Find(v);
        if (u == v) return;
        if(size[u] < size[v]) swap(u, v);
        
        parent[v] = u;
        size[u] += size[v];
    }
};

void solve () {
    DSU ds(7);
    ds.Union(1, 2);
    ds.Union(2, 3);
    ds.Union(4, 5);
    ds.Union(6, 7);
    ds.Union(5, 6);
    //if 3 and 7 are same or not
    if (ds.Find(3) == ds.Find(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    ds.Union(3, 7);
    if (ds.Find(3) == ds.Find(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;
}