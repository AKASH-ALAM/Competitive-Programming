struct DSU {        // O(4xalpha) = Constant time
    vector <int> Sz, Par;
    DSU (int n) {
        Sz.resize(n + 1), Par.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            Par[i] = i, Sz[i] = 1;
        }
    }

    int Find (int u) {
        return Par[u] = Par[u] == u ? u : Find(Par[u]);
    }

    void Union (int u, int v) {
        u = Find(u), v = Find(v);
        if (u == v) return;
        if(Sz[u] < Sz[v]) swap(u, v);
        Par[v] = u, Sz[u] += Sz[v];
    }
};
