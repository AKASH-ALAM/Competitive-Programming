const int MX = 1e6 + 2;
int spf[MX];

void pre_cal_spf() {
   for (int i = 2; i < MX; i += 2) spf[i] = 2;
   for (int i = 3; i < MX; i += 2) {
      for (int j = i; j < MX; j += i + i) {
         if (!spf[j]) spf[j] = i;
      }
   }
}

vector <int> factors;

void machine(int n) {
   while (n > 1) {
      factors.push_back(spf[n]);
      n /= spf[n];
   }
}

vector <pair<int, int>> v; // prime, cnt

while(n > 1){
   int p = spf[n], cnt = 0;
   while(n % p == 0){
      n /= p;
      cnt++;
   }
   v.push_back({p, cnt});
}