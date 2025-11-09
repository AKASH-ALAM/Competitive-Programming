/**
 *  Author  : Pnictogen
 *  Date    : 2022-12-02 01:32:55
 *  Task    : missing_and_repeating_number
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res ^= i ^ a[i];
    }

    cout << res << endl;
}