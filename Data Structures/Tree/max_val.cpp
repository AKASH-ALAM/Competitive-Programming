const int MX = 2e5+5;
int sbtr[MX], val[MX];

void dfs(int u, int parent, vector <int> *tree){
   sbtr[u] = val[u];
   for(auto &v : tree[u]){
      if(v != parent) {
         dfs(v, u, tree);
         sbtr[u] = max(sbtr[u], sbtr[v]);
      }
   }
}

void solve() {
   int n, m;   
   cin >> n;
   m = n - 1;
   vector <int> tree[n+1];
   for(int i = 0; i < m; i++){
      int u, v;   cin >> u >> v;
      tree[u].push_back(v);
      tree[v].push_back(u);
   }
   for(int i = 1; i <= n; i++) cin >> val[i];

   dfs(1, -1, tree);
   int q;   cin >> q;

   while(q--){
      int node;
      cin >> node;
      cout << sbtr[node] << endl;
   }
}