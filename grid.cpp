#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//to_string(x)             sqrtl()   stol(s);

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int t, n, st, en;
vector<vector<int>> adj;

bool dfs(int u, int p, int en, vector<int>& path) {
   path.push_back(u);
   if (u == en) return true;
   for (int v : adj[u]) {
      if (v == p) continue;
      if (dfs(v, u, en, path)) return true;
   }
   path.pop_back();
   return false;
}

void solve() {
   cin >> n >> st >> en;
   adj.assign(n + 1, vector<int>());

   for (int i = 1; i <= n - 1; i++) {
      int u, v;   cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   vector<int> path;
   dfs(st, -1, en, path);

   vector<bool> inPath(n + 1, false);
   for (int v : path) {
      inPath[v] = true;
   }

   vector<int> perm;
   for (int i = 1; i <= n; i++) {
      if (!inPath[i])
         perm.push_back(i);
   }
   for (int v : path)   perm.push_back(v);

   for (int i = 0; i < n; i++) {
      cout << perm[i] << " \n"[i == n-1];
   }
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