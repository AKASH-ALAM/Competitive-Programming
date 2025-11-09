int last = 0, dist = 0;

void dfs(int u, int parent, vector <int> *tree, int dis){
   for(auto &v : tree[u]){
      if(v != parent) {
         if(dis > dist){
            last = v;
            dist = dis;
         }
         dfs(v, u, tree, dis + 1);
      }
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
   dfs(last, -1, tree, 1);

   cout << dist << endl;
}