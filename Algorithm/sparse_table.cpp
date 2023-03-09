
void solve() {
   int n, q;  cin >> n >> q;
   int row = __lg(n) + 1;
   int a[n], sparse_tbl[row][n] = {{0}};

   for (int i = 0; i < n; i++) cin >> a[i];

   for (int i = 0; i < row; i++) { // build sparse
      for (int j = 0; j + (1 << i) - 1 < n; j++) { // subarray size = (1 << i) or (2^i)
         if (i == 0) sparse_tbl[i][j] = a[j];
         else sparse_tbl[i][j] = min(sparse_tbl[i - 1][j], sparse_tbl[i - 1][j + (1 << (i - 1))]);
      }
   }

   int l, r, Log[n + 1], k;
   Log[1] = 0;
   for (int i = 2; i <= n; i++) Log[i] = __lg(i / 2) + 1;

   while (q--) { // query
      cin >> l >> r; // 1-base index
      l--, r--; // 0-based indexing
      k = Log[r - l + 1];
      int Min = min(sparse_tbl[k][l], sparse_tbl[k][r - (1 << k) + 1]);
      cout << Min << endl;
   }
}