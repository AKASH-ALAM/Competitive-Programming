#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll memo[100]; // memoize

ll fibo(int n) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibo(n - 1) + fibo(n - 2); // it's a kind of memorizetion.
}

int main() {

    memset(memo, -1, sizeof memo);
    cout << fibo(30) << endl;

    return 0;
}