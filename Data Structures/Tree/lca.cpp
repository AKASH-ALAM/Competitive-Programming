//tree flatining and lca
const int N = 2e5+5, LN = __lg(N) + 1;
int level[N], dp[N][LN], in[N], out[N];
int arr[N], flat[2*N], timer, t = 1;
vector <int> tree[N];   

void dfs(int u, int p) {
   dp[u][0] = p;
   in[u] = ++timer;
   flat[timer] = arr[u];
   level[u] = level[p] + 1;

   for(int i = 1; i < LN; ++i) dp[u][i] = dp[dp[u][i-1]][i-1];
   for(auto v : tree[u]) {
      if(v != p)  {
         dfs(v, u);
      }
   }

   out[u] = timer;
   flat[++timer] = -arr[u];
}
 
int lca(int u, int v) {
    if(level[u] < level[v]) swap(u, v);
    int diff = level[u] - level[v];

    for(int i = 0; i < LN; ++i) {
        if(diff & (1 << i))  u = dp[u][i];
    }
    if(u == v) return u;

    for(int i = LN-1; i >= 0; --i) {
        if(dp[u][i] != dp[v][i]) {
            u = dp[u][i];
            v = dp[v][i];
        }
    }
    return dp[u][0];
}
