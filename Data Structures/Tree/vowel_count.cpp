const int MX = 2e5+5;
int sbtr[MX]; char ch[MX];

void dfs(int u, int parent, vector <int> *tree){
   sbtr[u] = (ch[u] == 'a' or ch[u] == 'e' or ch[u] == 'i' or ch[u] == 'o' or ch[u] == 'u');
   // same as odd/even count
   for(auto &v : tree[u]){
      if(v != parent) {
         dfs(v, u, tree);
         sbtr[u] += sbtr[v];
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
   for(int i = 1; i <= n; i++) cin >> ch[i];

   dfs(1, -1, tree);

   for(int i = 1; i <= n; i++) 
      cout << "No of vowel in " << i << " -> " << sbtr[i] << endl;
}