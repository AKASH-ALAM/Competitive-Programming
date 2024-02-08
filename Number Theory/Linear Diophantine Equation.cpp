// Extended Euclidean Algorithm
int Ex_gcd(int a, int b, int &x, int &y) {
   if (b == 0) {
      x = 1;
      y = 0;
      return a;
   }
   int x1, y1;
   int d = Ex_gcd(b, a % b, x1, y1);
   x = y1;
   y = x1 - y1 * (a / b);
   return d;
}


bool diophantine(int a, int b , int c, int &x0, int &y0, int &g) {
   g = Ex_gcd(abs(a), abs(b), x0, y0);

   if (c % g) return false;

   x0 = x0 * (c / g);
   y0 = y0 * (c / g);

   if (a < 0) x0 = -x0;
   if (b < 0) y0 = -y0;
   return true;
}