const int N = 2e5 + 5;
ll tree[N][21];
int arr[N];
 
void build(int n) {
   for (int i = 1; i <= n; i++) tree[i][0] = arr[i];
   for (int j = 1; j <= 20; j++) {
      for (int i = 1; i + (1 << j) - 1 <= n; i++) {
         tree[i][j] = gcd(tree[i][j - 1],    tree[i + (1 << (j - 1))][j - 1]);
      }
   }
}
 
ll query(int lo, int hi) {
   int lg = __lg(hi - lo + 1);
   return gcd(tree[lo][lg],   tree[hi - (1 << lg) + 1][lg]);
}