// (n >= r)
ll nCr(int n, int r) { // O(R Log N)
   if (r > n) return 0;
   if (r == 0 or n == r) return 1;
   if (n - r < r) r = n - r;

   ll p = 1, m = 1, k;

   while (r != 0) {
      p *= n--, m *= r--;
      k = __gcd(p, m);
      p /= k, m /= k;
   }
   return p;
}

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