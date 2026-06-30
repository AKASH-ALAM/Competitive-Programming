struct DSU {        // O(α(N))—Here α is Inverse Ackermann function। O(4xalpha) = Amortized Constant time
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

    bool Union (int u, int v) {
        u = Find(u), v = Find(v);
        if (u == v) return false;
        if(Sz[u] < Sz[v]) swap(u, v);
        Par[v] = u, Sz[u] += Sz[v];
        return true;
    }
};


