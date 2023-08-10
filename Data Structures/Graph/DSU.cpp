class DisjointSet { // O(4xalpha) = Constant time
public:
    vector <int> size, parent;

    DisjointSet(int n) {
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int FindUPar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = FindUPar(parent[node]);
    }

    void UnionBySize(int u, int v) {
        int ulp_u = FindUPar(u);
        int ulp_v = FindUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

void solve() {
    DisjointSet ds(7);
    ds.UnionBySize(1, 2);
    ds.UnionBySize(2, 3);
    ds.UnionBySize(4, 5);
    ds.UnionBySize(6, 7);
    ds.UnionBySize(5, 6);
    //if 3 and 7 are same or not
    if (ds.FindUPar(3) == ds.FindUPar(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    ds.UnionBySize(3, 7);
    if (ds.FindUPar(3) == ds.FindUPar(7)) cout << "Same" << endl;
    else cout << "Not Same" << endl;
}