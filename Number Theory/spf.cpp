int spf[MX];
vector <int> factors;

void pre_cal_spf() {
   for (int i = 2; i < MX; i += 2) spf[i] = 2;
   for (int i = 3; i < MX; i += 2) {
      for (int j = i; j < MX; j += i + i) {
         if (!spf[j]) spf[j] = i;
      }
   }
}

void machine(int n) {
   while (n > 1) {
      factors.push_back(spf[n]);
      n /= spf[n];
   }
}