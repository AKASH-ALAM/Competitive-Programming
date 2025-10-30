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
//ax + by = c
// x is a inverse of b and y is a inverse of a