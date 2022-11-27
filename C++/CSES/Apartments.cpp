
/*Author   : Pnictogen
*  Task    :
*  Algo    :
*/

#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e5;

#ifdef LOCAL
#include"debug.h"
#else
#define debug(...)
#endif

const int N = 1e6;

ll a[N], b[N], n, m, k;

void solve() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(b, b + m);
    sort(a, a + n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(b, b + m, a[i] - k);
        if (*it <= a[i] + k and * it != 0) {
            debug(*it, a[i] + k);
            cnt++;
            b[(it - b)] = -1;
        }
    }

    cout << cnt << endl;
}

int main() {

#ifdef LOCAL
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;

    int t = 1;  //cin >> t;

    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}