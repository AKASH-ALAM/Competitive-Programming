
const int mx = 32000; // is sqrt of : 1e9
bitset <mx> isPrime;
vector <int> prime;

void sieve() {
	isPrime.set();
	prime.push_back(2);
	for (int i = 3; i <= mx; i += 2) {
		if (isPrime[i]) {
			prime.push_back(i);
			for (int j = i * i; j <= mx; j += i * 2) isPrime[j] = false;
		}
	}
}


int phi(int n) {
	int result = n;
	for (int i = 0; prime[i] * prime[i] <= n; i++) {
		if (n % prime[i] == 0) {
			while (n % prime[i] == 0) n /= prime[i];
			result -= result / prime[i];
		}
	}
	if (n > 1) {
		result -= result / n;
	}

	return result;
}
