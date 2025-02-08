#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define LL           long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()

const int N = 1700000;
const int MOD = 1e9 + 7;
const LL P[] = {97, 1000003};

LL bigMod (LL a, LL e) {
  if (e == -1) e = MOD - 2;
  LL ret = 1;
  while (e) {
    if (e & 1) ret = ret * a % MOD;
    a = a * a % MOD, e >>= 1;
  }
  return ret;
}

int pwr[2][N], inv[2][N];

void initHash() {
  for (int it = 0; it < 2; ++it) {
    pwr[it][0] = inv[it][0] = 1;
    LL INV_P = bigMod(P[it], -1);
    for (int i = 1; i < N; ++i) {
      pwr[it][i] = (LL) pwr[it][i - 1] * P[it] % MOD;
      inv[it][i] = (LL) inv[it][i - 1] * INV_P % MOD;
    }
  }
}

//Call initHash. The functions are 0 indexed.
struct RangeHash {
  vector <int> h[2], rev[2];

  RangeHash (const string S, bool revFlag = 0) {
    for (int it = 0; it < 2; ++it) {
      h[it].resize(S.size() + 1, 0);
      for (int i = 0; i < S.size(); ++i) {
        h[it][i + 1] = (h[it][i] + (LL) pwr[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
      }
      if (revFlag) {
        rev[it].resize(S.size() + 1, 0);
        for (int i = 0; i < S.size(); ++i) {
          rev[it][i + 1] = (rev[it][i] + (LL) inv[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
        }
      }
    }
  }

  inline LL get (int l, int r) {
    if (l > r) return 0;
    LL one = (LL) (h[0][r + 1] - h[0][l]) * inv[0][l + 1] % MOD;
    LL two = (LL) (h[1][r + 1] - h[1][l]) * inv[1][l + 1] % MOD;
    if (one < 0) one += MOD; if (two < 0) two += MOD;
    return one << 31 | two;
  }

  inline LL getReverse (int l, int r) {
    if (l > r) return 0;
    LL one = (LL) (rev[0][r + 1] - rev[0][l]) * pwr[0][r + 1] % MOD;
    LL two = (LL) (rev[1][r + 1] - rev[1][l]) * pwr[1][r + 1] % MOD;
    if (one < 0) one += MOD; if (two < 0) two += MOD;
    return one << 31 | two;
  }
};

void solve() {
   int n;   cin >> n;
   string s;   cin >> s;

   initHash();
   RangeHash hash(s);
   cout << hash.get(1, 2) << endl;

   RangeHash rev(s, 1);
   cout << rev.getReverse(1, 2) << endl;
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