const int MX = 2e5+5;
int sbtr[MX][26];
char ch[MX];

void dfs(int u, int parent, vector <int> *tree){
   sbtr[u][ch[u]-'a'] = 1;
   for(auto &v : tree[u]){
      if(v != parent) {
         dfs(v, u, tree);
         for(int i = 0; i < 26; i++){
            sbtr[u][i] += sbtr[v][i];
         }
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
   int q;   cin >> q;
   
   while(q--){
      int node, odd = 0, even = 0;
      cin >> node;

      for(int i = 0; i < 26; i++){
         if(sbtr[node][i] != 0) cout << char(i + 'a') << " = " << sbtr[node][i] << endl; 
         if(sbtr[node][i] % 2 == 0) even++;
         else odd++;
      }

      if(odd <= 1) cout << "Palindrome" << endl;
      else cout << "No" << endl;
   }
}