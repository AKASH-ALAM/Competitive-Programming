#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

ll BigMod(ll a, ll b, ll m) {
    ll res = 1; a = a % m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
} // O(log m)

void solve(){
    ll n;  cin >> n;
    int even = 0;
    for(int i = 0; i < n; i++){
        int val;    cin >> val;
        if(val % 2 == 0) even++;
    }
    ll up = BigMod(2, even, MOD);

    cout << up << endl;
}

int main() {
    unsyncIO;
    int t = 1;
    cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}