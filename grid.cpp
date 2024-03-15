#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define gcd(x,y)      __gcd(x,y)
#define sz(x)         (int)x.size()
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)
//stol(s);sqrtl()     to_string(x);
const ld PI = acos((ld) - 1);
const ll INF = 2e18 + 1;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int divisor_sum(int n) {
    int sum = 1;
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                sum += i;
            } else {
                sum += i;
                sum += n / i;
            }
        }
    }
    return sum;
}

void solve() {
    int n;  cin >> n;
    cout << divisor_sum(n) << endl;
}

int main() {

#ifdef LOCAL
    clock_t tStart = clock();
#endif

    unsyncIO;
    int t = 1;
    cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << prec(5) << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}