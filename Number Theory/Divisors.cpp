/**  Author  : Pnictogen
 **  Algo    :      **/

#include <bits/stdc++.h>
#define Fast_io ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
using namespace std;

#define MAX 32000
using ll = long long;
vector <int> prime;
vector <bool> isPrime(MAX, true);

void sieve() {
    for (int i = 3; i * i < MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i * 2) {
                isPrime[j] = false;
            }
        }
    }

    prime.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (isPrime[i]) prime.push_back(i);
    }
}

set <int> divisors;

void show_divisor(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.insert(i);
            divisors.insert(n / i);
        }
    }

    cout << "The Divisors are : ";
    for (auto i : divisors) {
        cout << i << " ";
    } cout << endl;
}

int countDivisor(int n) {
    int divisor = 1;
    for (int i = 0; n != 1; i++) {
        if (!(n % prime[i])) {
            int cnt = 1;
            while (!(n % prime[i])) {
                n /= prime[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}

int DivisorSum(int n) {
    int total = 1;
    for (int i = 0; n != 1; i++) {
        if (!(n % prime[i])) {
            int cnt = 1;
            while (!(n % prime[i])) {
                n /= prime[i];
                cnt++;
            }
            total *= (pow(prime[i], cnt) - 1) / (prime[i] - 1);
        }
    }
    return total;
}

int main() {
    Fast_io;
    sieve();

    int n;  cin >> n;
    show_divisor(n);
    cout << "Number of Divisors = " << countDivisor(n) << endl;
    cout << "Sum of Divisors = " << DivisorSum(n) << endl;

    return 0;
}