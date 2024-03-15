const int N = 1e7 + 5;
bitset < N + 5 > mark; // zero means prime
vector <ll> primes;
int limit = sqrt(N);

void sieve() { // O(N * log(log(sqrt(N))));
   mark[0] = mark[1] = 1;
   for (int i = 4; i <= N; i += 2) mark[i] = 1;

   for (int i = 3; i <= limit; i += 2) {
      if (mark[i] == 1) continue;
      for (int j = i * i; j <= N; j += i * 2) mark[j] = 1;
   }

   primes.push_back(2);
   for (int i = 3; i <= N; i += 2) {
      if (mark[i] == 0) primes.push_back(i);
   }
}

void prime_fact(ll n, vector <ll> &factors) {
   for (int i = 0; (ll) primes[i]*primes[i] <= n; i++) {
      if (n % primes[i] == 0) {
         while (n % primes[i] == 0) {
            factors.push_back(primes[i]);
            n /= primes[i];
         }
      }
   }
   if (n > 1) factors.push_back(n);
}

void prime_fact(ll n, vector<pair<ll, int>> &factors) {
   for (int i = 0; (ll) primes[i]*primes[i] <= n; i++) {
      if (n % primes[i] == 0) {
         int cnt = 0;
         while (n % primes[i] == 0) {
            n /= primes[i];
            cnt++;
         }
         factors.push_back({primes[i], cnt});
      }
   }
   if (n > 1) factors.push_back({n, 1});
}