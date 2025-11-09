const int MX = 1e5;
int depth[MX];

void dfs(int u, int parent, vector <int> *tree, int level){
   depth[u] = level;
   for(auto &v : tree[u]){
      if(v != parent) dfs(v, u, tree, level + 1);
   }
}

void solve() {
   int n, m;   cin >> n >> m;
   vector <int> tree[n+1];
   for(int i = 0; i < m; i++){
      int u, v;   cin >> u >> v;
      tree[u].push_back(v);
      tree[v].push_back(u);
   }
   dfs(1, -1, tree, 0);
   for(int i = 1; i <= n; i++) cout << depth[i] << " \n"[i == n];
}