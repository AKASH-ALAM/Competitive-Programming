#include <bits/stdc++.h>

using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//stol(s);sqrtl()     to_string(x);

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve() {
    int n;  cin >> n;
    string a, b;   cin >> a >> b;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        while (a[i] != b[i]) {
            cnt++;
            if (a[i] - 'A' + 3 >= 26) {
                // cerr << a[i] << ' ' << signed(a[i] - 'A') + 3 << endl;
                a[i] = 'A' + (a[i] - 'A' + 3) % 26;
            }
            else a[i] += 3;
            // debug(a, b);
        }
        cout << cnt << ' ';
    } cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}