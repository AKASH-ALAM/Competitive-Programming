// (n >= r)

ll nCr(int n, int r) { //Calculate nCr using Pascal’s Triangle: O(r)
   if (r > n) return 0;
   if (r == 0 or n == r) return 1;
   if (n - r < r) r = n - r;

   r = min(n, r);   ll p = 1;

   for (int i = 1; i <= r; i++) {
      p = (p * (n - r + i)) / i;
   }
   return p;
}