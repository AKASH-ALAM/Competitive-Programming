const int N = 1e8+5;
vector <int> spf(N+1), primes;

void LS() {
    for (int i = 2; i <= N; ++i) {
        if (spf[i] == 0) {
            primes.push_back(i);
            spf[i] = i;
        }
        for (int j = 0; i * primes[j] <= N; ++j) {
            spf[i * primes[j]] = primes[j];
            if (primes[j] == spf[i]) break;
        }
    }
}
