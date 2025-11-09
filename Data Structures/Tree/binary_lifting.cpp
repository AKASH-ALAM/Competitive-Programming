int const N = 2e5+5;
vector <int> tree[N];
int ancestor[N][21];

void binary_lifting(int u, int p){
   if(u != 0) depth[u] = depth[p] + 1;
   ancestor[u][0] = p;

   for(int i = 1; i <= 20; i++){
      if(ancestor[u][i-1] != -1){
         ancestor[u][i] = ancestor[ancestor[u][i-1]][i-1];
      } else ancestor[u][i] = -1;
   }

   for(auto &v : tree[u]){
      if(v != p) binary_lifting(v, u);
   }
}

int query(int node, int k){
   if(k == 0 or node == -1) return node;
   for(int i = 20; i >= 0; i--){
      if(k & (1 << i)) return node = query(ancestor[node][i], k - (1 << i));
   }
   return node;
}

// without recursion 

int query(int node, int k){
   if(depth[node] < k) return -1;
   for(int i = 20; i >= 0; i--){
      if(k & (1 << i)){
         node = ancestor[node][i];
         k -= (1 << i);
      }
   }
   return node;
}