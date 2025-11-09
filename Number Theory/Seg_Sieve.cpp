/**  Author  : Pnictogen
 **  Algo    :      **/

#include <bits/stdc++.h>
using namespace std;
#define MAX 32000
using ll = long long;
vector <int> primes;
vector <bool> isPrime(MAX, true);

void sieve() {
    for (int i = 3; i * i < MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i * 2) {
                isPrime[j] = false;
            }
        }
    }

    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void segSieve(ll l, ll r) {
    vector <bool> isPrime(r - l + 1, true);
    if (l == 1) isPrime[0] = false;

    for (int i = 0; primes[i]*primes[i] <= r; i++) {
        ll currentPrime = primes[i];
        ll base = (l / currentPrime) * currentPrime;
        if (base < l) base = base + currentPrime;

        for (int j = base; j <= r; j += currentPrime) {
            isPrime[j - l] = false;
        }

        if (base == currentPrime) isPrime[base - l] = true;
    }

    for (int i = 0; i < r - l + 1; i++) {
        if (isPrime[i]) cout << (i + l) << endl;
    }
}

int main() {
    sieve();
    int t;  cin >> t;
    while (t--) {
        ll l, r;    cin >> l >> r;
        segSieve(l, r);
    }

    return 0;
}