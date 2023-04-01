
ull ncr(int n, int r) {
   if (r > n) return 0;
   if (r == 0 or n == r) return 1;
   if (n - r < r) r = n - r;

   ull p = 1, m = 1, k;

   while (r != 0) {
      p *= n;
      m *= r;
      k = __gcd(p, m);
      p /= k;
      m /= k;
      n--, r--;
   }

   return p;
}