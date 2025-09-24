#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int cnt = 0;

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


void solve(){
    int n, m;   cin >> n >> m;
    vector <pair<int, int>> g;
    for(int i = 1; i <= m; i++){
        int u, v;   
        cin >> u >> v;
        g.push_back({u, v});
    }

    bool vis[m+2];
    memset(vis, 0, sizeof(vis));

    vector <int> ans;
    int q;  cin >> q;
    vector <int> thread;

    for(int i = 0; i < q; i++){
        int x;  cin >> x;
        x--;
        vis[x] = 1;
        thread.push_back(x);
    }
    cnt = n;
    DSU ds(n);

    for(int i = 0; i < m; i++){
        if(!vis[i]) {
            auto [u, v] = g[i];
            ds.Union(u, v);
        }
    }
    ans.push_back(cnt);

    for(int i = q-1; i > 0; i--){
        auto [u, v] = g[thread[i]];
        ds.Union(u, v);
        ans.push_back(cnt); 
    }

    for(int i = q-1; i >= 0; i--) cout << ans[i] << ' ';
    cout << endl;
}

int main() {
    unsyncIO;
    int t = 1;
    // cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}