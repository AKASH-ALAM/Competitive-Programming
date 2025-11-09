#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 1e6 + 5;
int  cs = 1;

int mu[MX], freq[MX]; 

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void mobius(int limit) {
    vector<int> primes;
    vector<bool> vis(limit + 1, 0);
    mu[1] = 1;
    for (int i = 2; i <= limit; ++i) {
        if (!vis[i]) {         
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if (i * p > limit) break;
            vis[i * p] = 1;
            if (i % p == 0) {   // ⇒ square factor
                mu[i * p] = 0;
                break;
            } else mu[i * p] = -mu[i];
        }
    }
}

inline ll C3(ll n) {
    if (n < 3) return 0;
    return n * (n - 1) * (n - 2) / 6;
}

void solve() {
    int n;  cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
        mx = max(mx, a[i]);
    }

    mobius(mx);

    for (int d = 1; d <= mx; ++d) {
        for (int mult = 2*d; mult <= mx; mult += d) {
            freq[d] += freq[mult];
        }
    }

    ll ans = 0;
    for (int d = 1; d <= mx; ++d) {
        ans += (ll)mu[d] * C3(freq[d]);
    }

    cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(false); 
   cin.tie(nullptr);
   int t = 1;
   //cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}