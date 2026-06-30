const int MX = 1e6 + 5; // is sqrt of : 1e9

int phi(int n) {
	int result = n;
	for (int i = 0; prime[i] * prime[i] <= n; i++) {
		if (n % prime[i] == 0) {
			while (n % prime[i] == 0) n /= prime[i];
			result -= result / prime[i];
		}
	}
	if (n > 1) result -= result / n;
	return result;
}

// 1 to n :- without sieve:
int phi[MX];
void phi_1_to_n() {
	for (int i = 0; i < MX; i++) phi[i] = i;
	for (int i = 2; i < MX; i++) {
		if (phi[i] == i) {
			for (int j = i; j < MX; j += i) phi[j] -= phi[j] / i;
		}
	}
}
