const int MX = 2e5+5;
int in[MX], out[MX], timer = 0;

void dfs(int u, int parent, vector <int> *tree){
   in[u] = timer++;
   for(auto &v : tree[u]){
      if(v != parent) {
         dfs(v, u, tree);
      }
   }
   out[u] = timer++;
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
   dfs(1, -1, tree);
   for(int i = 1; i <= n; i++) cout << in[i] << " \n"[i == n];
   for(int i = 1; i <= n; i++) cout << out[i] << " \n"[i == n];
   int node = 1;  
   cout << "Subtree Size of : " << node << " = " << (out[node]-in[node]) / 2 << endl;
}

//second way and the best way

const int MX = 2e5+5;
int sbtr[MX];

void dfs(int u, int parent, vector <int> *tree){
   sbtr[u] = 1;
   for(auto &v : tree[u]){
      if(v != parent) {
         dfs(v, u, tree);
         sbtr[u] += sbtr[v];
      }
   }
}
