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

vector <bool> vis; 
void dfs(int v, vector <vector<int>> const& g, vector <int> &output) {
   vis[v] = true;
   for (auto u : g[v]) if (!vis[u]) dfs(u, g, output);
   output.push_back(v);
}

void Kosaraju(vector <vector<int>> const& g, int &n, int &k) {
   vector <int> order, id(n + 1, 0), count(n + 1, 0); 
   vis.assign(n + 1, false);
   for (int i = 1; i <= n; i++) if (!vis[i]) dfs(i, g, order);

   vector <vector<int>> rg(n + 1), DAG;
   for (int v = 1; v <= n; v++) for (int u : g[v]) rg[u].push_back(v);
   vis.assign(n + 1, false);
   reverse(order.begin(), order.end());

   int root = 0;
   for (auto v : order){
      if(vis[v]) continue;
      vector<int> cmp;
      dfs(v, rg, cmp);
      count[root] = sz(cmp);
      for (auto u : cmp) id[u] = root;
      root++;  
   }

   DAG.assign(root + 1, {});
   for (int v = 1; v <= n; v++){
      for (auto u : g[v]){
         if (id[v] != id[u]) DAG[id[v]].push_back(id[u]);
      }
   }
   vector <vector<ll>> dp(root+1, vector <ll> (k+1, -1));

   function <ll(int, int)> fun = [&](int u, int k){
      if(k == 0) return 0LL;
      if(dp[u][k] != -1) return dp[u][k];
      ll x = count[u];
      for(auto v : DAG[u]) x = max(x, count[u] + fun(v, k -1));
      return dp[u][k] = x;
   };

   ll ans = 0;
   for(int i = 0; i < root; i++) ans = max(ans, fun(i, k));
    cout << ans << endl;
}

void solve(){
   int n, m, k;    cin >> n >> m >> k;
   vector <vector<int>> g(n+1);
   for(int i = 0; i < m; i++){
   int u, v;   cin >> u >> v;
      g[u].push_back(v);
   }

   Kosaraju(g, n, k);
}

int main() {
    unsyncIO;
    int t = 1;
    cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}