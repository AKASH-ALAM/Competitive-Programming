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