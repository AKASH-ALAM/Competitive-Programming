#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define prec(x)       fixed<<setprecision(x)
#define rall(x)       (x).rbegin(),(x).rend()
#define testcase      cout << "Case " << cs++ << ":"
//to_string(x)             sqrtl()   stol(s);

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

vector<bool> vis; 
void dfs(int v, vector<vector<int>> const& adj, vector<int> &output) {
    vis[v] = true;
    for (auto u : adj[v])
        if (!vis[u]) dfs(u, adj, output);
    output.push_back(v);
}

void SCC(vector<vector<int>> const& adj, int n) {
   vector<int> order, roots(n + 1, 0), scc_sz(n + 1, 0);
   vis.assign(n + 1, false);
   for (int i = 1; i <= n; i++) if (!vis[i]) dfs(i, adj, order);

   vector<vector<int>> adj_rev(n + 1), components, condens;
   for (int v = 1; v <= n; v++){
      for (int u : adj[v]) adj_rev[u].push_back(v);
   }
   vis.assign(n + 1, false);
   reverse(order.begin(), order.end());

   for (auto v : order){
     if (!vis[v]) {
         vector<int> cmp;
         dfs(v, adj_rev, cmp);
         components.push_back(cmp);
         int root = *min_element(begin(cmp), end(cmp));
         scc_sz[root] = sz(cmp);
         for (auto u : cmp) roots[u] = root;
         // debug(tuple(cmp, scc_sz[root])); 
     }
   }

   condens.assign(n + 1, {});
   for (int v = 1; v <= n; v++){
      for (auto u : adj[v]){
         if (roots[v] != roots[u]) condens[roots[v]].push_back(roots[u]);
      }
   }

   // for(int u = 1; u <= n; u++){
   //    if(condens[u].empty()) continue;
   //    debug(tuple(u, condens[u]));
   // }
}

void solve() {
   int n, m, k;   cin >> n >> m;
   vector <vector<int>> g(n+1);
   for(int i = 0; i < m; i++){
      int u, v;   cin >> u >> v;
      g[u].push_back(v);
   }

   SCC(g, n);
}

signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t = 1;
   cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}