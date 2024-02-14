#include <bits/stdc++.h>
using namespace std;

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

vector <int> divisors;
void show_divisor(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i * i != n) divisors.push_back(n / i);
        }
    }
}

int countDivisor(int n) {
    int divisor = 1;
    for (int i = 0; primes[i] * primes[i] <= n; i++) {
        int cnt = 1;
        if (n % primes[i] == 0) {
            while (n % primes[i] == 0) {
                cnt++;
                n /= primes[i];
            }
            divisor *= cnt;
        }
    }
    if (n > 1)
        divisor *= 2;
    return divisor;
}

int DivisorSum(int n) {
    int total = 1;
    for (int i = 0; n != 1; i++) {
        if (!(n % primes[i])) {
            int cnt = 1;
            while (!(n % primes[i])) {
                n /= primes[i];
                cnt++;
            }
            total *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }
    return total;
}

void solve() {
    show_divisor(36);
    for (auto i : divisors) cout << i << ' '; cout << endl;
    cout << countDivisor(36) << endl;
    cout << DivisorSum(36) << endl;
}

int main() {
    int t = 1;
    sieve();
    while (t--) {
        solve();
    }

    return 0;
}