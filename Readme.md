<div align="center">

# ⚔️ CP Template Library — AKASH ALAM

### *"The prepared mind sees opportunities where others see chaos."*


> A **battle-tested**, hand-crafted collection of competitive programming templates, algorithms, data structures, and debugging strategies — built and refined through hundreds of contests.

</div>

---

## 📁 Repository Structure

```
Competitive-Programming/
├── Algorithm/              # Sorting, Searching, Greedy, Divide & Conquer
├── Bits Manipulation/      # Bit tricks and bitmask techniques
├── Data Structures/        # Segment Tree, Sparse Table, DSU, Monotonic Stack
├── Dynamic Programming/    # Classic DP patterns
├── Hash/                   # Hashing techniques
├── Math/                   # Number theory, Combinatorics, Geometry
├── Number Theory/          # Sieve, Modular Arithmetic, Phi function
├── Recursion/              # Recursive templates
├── STL/                    # STL hacks and ordered_set
├── String/                 # String algorithms
├── Trick or Shortcut/      # Built-in functions & competitive tricks
├── cf_template.cpp         # Codeforces submission template
├── debug.h                 # Debug helper header
└── CP TEMPLATE LIBRARY - AKASH-ALAM.docx  # Master reference document
```

---

## Template

```cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define sz(x)     (int)x.size()
#define all(x)    (x).begin(),(x).end()
#define rall(x)   (x).rbegin(),(x).rend()
#define prec(x)   fixed<<setprecision(x)
#define testcase  cout << "Case " << tc++ << ": "
#define unsyncIO  ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
using namespace __gnu_pbds;

template <class T> using ordered_set      = tree<T, null_type, less<T>,        rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using ordered_multiset = tree<T, null_type, less_equal<T>,  rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x)  → 0-based rank of x,                   O(log n)
// find_by_order(k) → element at rank k,                    O(log n)

using ll  = long long;
using ld  = long double;
using ull = unsigned long long;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

const ld PI  = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N   = 2e5 + 5;
int tc = 1;

void solve() {

}

int main() {
    unsyncIO;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
```

---

## ⚙️ Build Configuration

<details>
<summary><strong>Sublime Text — Linux / Mac</strong></summary>

```json
{
  "cmd": [
    "bash", "-c",
    "g++ -std=gnu++17 -O2 -DLOCAL -Wall '${file}' -o '${file_path}/${file_base_name}' && timeout 3s '${file_path}/${file_base_name}' < in.txt > out.txt"
  ],
  "selector": "source.c, source.c++"
}
```
</details>

<details>
<summary><strong>Sublime Text — Windows</strong></summary>

```json
{
  "shell_cmd": "g++ -std=c++17 -O2 -Wall -DLOCAL \"${file}\" -o \"${file_base_name}\" && \"${file_base_name}\" < in.txt > out.txt",
  "shell": true,
  "working_dir": "$file_path",
  "selector": "source.c++"
}
```
</details>

---

## 🔢 Number Theory

### BigMod · Modular Exponentiation
```cpp
ll BigMod(ll B, ll P, ll M) {   // returns B^P % M
    ll R = 1;
    while (P > 0) {
        if (P & 1) R = R * B % M;
        P >>= 1;  B = B * B % M;
    }
    return R;
}
ll ModInverse(ll n, ll mod) { return BigMod(n, mod - 2, mod); }  // mod must be prime
```

### Extended Euclidean Algorithm  *(non-prime modulus)*
```cpp
// egcd(a,b) → gcd; x = inverse of a under mod b
int x, y;
int egcd(int a, int b) {
    x = 1; y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x,  x1) = make_tuple(x1,  x  - q * x1);
        tie(y,  y1) = make_tuple(y1,  y  - q * y1);
        tie(a1, b1) = make_tuple(b1,  a1 - q * b1);
    }
    return a1;
}
int modInverse(int A, int M) { egcd(A, M); return (x % M + M) % M; }
```

### nPr · nCr  *(without mod)*
```cpp
ll nPr(int n, int r) {
    ll ans = 1;
    while (r--) ans *= n--;
    return ans;
}

ll nCr(int n, int r) {   // Pascal's triangle, O(r)
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    if (n - r < r) r = n - r;
    ll p = 1;
    for (int i = 1; i <= r; i++) p = p * (n - r + i) / i;
    return p;
}
```

### nCr % MOD  *(precomputed factorials)*
```cpp
const int FACT_MX = 1e6 + 2;
ll fact[FACT_MX], inv_fact[FACT_MX];

void precalc() {
    fact[0] = 1;
    for (int i = 1; i < FACT_MX; i++) fact[i] = fact[i-1] * i % MOD;
    for (int i = 0; i < FACT_MX; i++) inv_fact[i] = BigMod(fact[i], MOD - 2, MOD);
}

ll nCr_mod(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    return fact[n] % MOD * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}
// call precalc() in main before use
```

### Sieve of Eratosthenes
```cpp
const int SV = 1e7;   // supports up to ~1e8 with bitset
bitset<SV + 5> mark;
vector<ll> primes;

void sieve() {
    int sq = sqrt(SV);
    for (int i = 4; i <= SV; i += 2) mark[i] = 1;
    for (int i = 3; i <= sq; i += 2) {
        if (mark[i]) continue;
        for (int j = i * i; j <= SV; j += 2 * i) mark[j] = 1;
    }
    for (int i = 2; i <= SV; i++) if (!mark[i]) primes.push_back(i);
}
```

### Linear Sieve  *(Smallest Prime Factor)*
```cpp
const int LS = 1e8 + 5;
vector<int> spf(LS + 1), lprimes;

void linearSieve() {
    for (int i = 2; i <= LS; ++i) {
        if (!spf[i]) { spf[i] = i; lprimes.push_back(i); }
        for (int j = 0; (ll)i * lprimes[j] <= LS; ++j) {
            spf[i * lprimes[j]] = lprimes[j];
            if (lprimes[j] == spf[i]) break;
        }
    }
}

// Get prime factors of n using spf
vector<int> primeFactors(int n) {
    vector<int> f;
    while (n > 1) { f.push_back(spf[n]); n /= spf[n]; }
    return f;
}
```

### Pre-calculate All Prime Factors 1..N
```cpp
const int PF_MX = 1e6 + 5;
vector<int> pf[PF_MX];

void primeFactorSieve() {
    for (int p = 2; p < PF_MX; p++) {
        if (mark[p]) continue;    // reuse sieve mark[]
        for (int m = p; m < PF_MX; m += p) pf[m].push_back(p);
    }
}
```

### Pre-calculate All Divisors 1..N
```cpp
const int DIV_N = 1e5;
vector<int> divisors[DIV_N + 1];
int div_cnt[DIV_N + 1];

void genDivisors() {
    for (int i = 1; i <= DIV_N; i++)
        for (int j = i; j <= DIV_N; j += i) {
            divisors[j].push_back(i);
            div_cnt[j]++;
        }
}
```

### Divisors of N from Its Prime Factorisation
```cpp
// v = {prime, exponent} pairs of n
vector<pair<int,int>> v;
vector<int> divs;

void getDivisors(int idx, int num) {
    if (idx == (int)v.size()) { divs.push_back(num); return; }
    for (int i = 0; i <= v[idx].second; i++) {
        getDivisors(idx + 1, num);
        num *= v[idx].first;
    }
}
```

### Sum of Divisors
```cpp
ll divisorSum(int n) {
    ll sum = 1;
    for (int i = 0; n != 1; i++) {
        int cnt = 1;
        while (n % primes[i] == 0) { n /= primes[i]; cnt++; }
        sum *= (ll)(powl(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return sum;
}
```

### Euler's Phi Function
```cpp
// Single n — O(sqrt n)
int phi(int n) {
    int r = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            r -= r / i;
        }
    }
    if (n > 1) r -= r / n;
    return r;
}

// All values 1..n — O(n log log n)
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    iota(phi.begin(), phi.end(), 0);
    for (int i = 2; i <= n; i++)
        if (phi[i] == i)                         // i is prime
            for (int j = i; j <= n; j += i) phi[j] -= phi[j] / i;
}
```

### Principle of Inclusion-Exclusion  *(PIE)*
```cpp
// |A∪B∪C| = |A|+|B|+|C| − |A∩B| − |A∩C| − |B∩C| + |A∩B∩C|
ll PIE(vector<int> &v, int n, ll m) {    // O(2^n * n)
    ll even = 0, odd = 0;
    for (int mask = 1; mask < (1LL << n); mask++) {
        ll tmp = m;
        for (int i = 0; i < n; i++) if (mask & (1LL << i)) tmp /= v[i];
        (__builtin_popcountll(mask) & 1 ? odd : even) += tmp;
    }
    return odd - even;
}
```

### Derangements
```cpp
ll derangements(ll n) {
    if (n <= 2) return n - 1;
    ll a = 0, b = 1;
    for (ll i = 3; i <= n; ++i) { ll c = (i-1)*(a+b) % MOD; a = b; b = c; }
    return b;
}
```

### Möbius Function
```cpp
const int MU_MX = 1e6 + 5;
int mu[MU_MX];

void mobius(int lim) {
    vector<int> mp; vector<bool> vis(lim + 1, false);
    mu[1] = 1;
    for (int i = 2; i <= lim; ++i) {
        if (!vis[i]) { mp.push_back(i); mu[i] = -1; }
        for (int p : mp) {
            if ((ll)i * p > lim) break;
            vis[i * p] = true;
            mu[i * p] = (i % p == 0) ? 0 : -mu[i];
            if (i % p == 0) break;
        }
    }
}
```

### Ternary Search
```cpp
// Finds minimum of a unimodal function on integer range [lo, hi]
while (hi - lo >= 3) {
    int m1 = lo + (hi - lo) / 3;
    int m2 = hi - (hi - lo) / 3;
    if (f(m1) < f(m2)) lo = m1;   // swap condition to find maximum
    else               hi = m2;
}
```

---

## 📐 Useful Formulas

### Arithmetic Progression (AP)
| Formula | Expression |
|:---|:---|
| n-th term | `a + (n-1) * d` |
| Sum of first n terms | `n * (2*a + (n-1)*d) / 2` |
| Sum of 1..n | `n*(n+1)/2` |
| Sum of squares 1..n | `n*(n+1)*(2n+1)/6` |
| Sum of cubes 1..n | `(n*(n+1)/2)^2` |

### Binomial Coefficient Identities
| Identity | Formula |
|:---|:---|
| Binomial sum | `C(n,0)+C(n,1)+...+C(n,n) = 2^n` |
| Pascal's identity | `C(n,k) = C(n-1,k-1) + C(n-1,k)` |
| Hockey-stick | `C(r,r)+C(r+1,r)+...+C(n,r) = C(n+1,r+1)` |
| Vandermonde | `C(m+n,r) = Σ C(m,k)*C(n,r-k)` |

### Triangle Numbers
```
0 + 1 + 3 + 6 + 10 + 15 + ... + n(n+1)/2
Sum of first n triangle numbers = n*(n+1)*(n+2)/6

// Check if n is a triangular number:
long long D = 8LL * n + 1;
bool isTriangular = (sqrtl(D) * sqrtl(D) == D);
```

### Catalan Numbers
```
C_n = C(2n, n) / (n+1)
C_0=1, C_1=1, C_2=2, C_3=5, C_4=14, C_5=42 ...
Recurrence: C_{n+1} = sum_{i=0}^{n} C_i * C_{n-i}
```

### Properties of GCD
```
gcd(a, 0)   = |a|
gcd(a, b)   = gcd(a − b, b)         // a > b
gcd(a, b)   = gcd(b, a % b)
ax + by     = gcd(a, b)              // Bézout's identity
ax + by = c has solutions iff gcd(a,b) | c
```

### Properties of Phi
```
φ(1) = 1
φ(p) = p − 1                         // p prime
φ(p^k) = p^k − p^(k-1)
φ(a*b) = φ(a)*φ(b)                   // if gcd(a,b)=1
Sum_{d|n} φ(d) = n
```

### Properties of MOD
```cpp
(a + b) % m = ((a % m) + (b % m)) % m
(a * b) % m = ((a % m) * (b % m)) % m
(a - b) % m = ((a % m) - (b % m) + m) % m   // avoid negative
(a / b) % m = (a % m) * ModInverse(b, m) % m
```

### Floor / Ceil
```
floor(a/b) = (a - (a%b)) / b      (integer division in C++ for a,b > 0)
ceil(a/b)  = (a + b - 1) / b
```

### Digit Sum Tricks
```
digitSum(n) ≡ n (mod 9)
A number is divisible by 9 iff its digit sum is divisible by 9.
A number is divisible by 3 iff its digit sum is divisible by 3.
```

### Key Constant Numbers

| Value | Meaning |
|:---|:---|
| `1e9 + 7` | Safe prime for mod arithmetic |
| `1e9 + 9` | Another safe prime |
| `998244353` | NTT-friendly prime |
| `1e18` | Max `long long` (≈ 9.2 × 10^18) |
| `log₂(10^18) ≈ 60` | Max bits for binary lifting |
| `π ≈ 3.14159265358979` | Use `acos(-1.0L)` |
| `√N` | Perfect squares ≤ N |
| `log₂(N)` | Max prime factors of N |

---

## 🗃️ Data Structures

### Segment Tree  *(Point Update, Range Query)*
```cpp
const int SEG = 2e5 + 5;
int arr[SEG]; ll seg[4 * SEG];

#define L(i)   (i * 2)
#define R(i)   (i * 2 + 1)
#define M(l,h) ((l + h) / 2)

void build(int i, int lo, int hi) {
    if (lo == hi) { seg[i] = arr[lo]; return; }
    build(L(i), lo, M(lo,hi)); build(R(i), M(lo,hi)+1, hi);
    seg[i] = min(seg[L(i)], seg[R(i)]);
}
ll query(int i, int lo, int hi, int l, int r) {
    if (l > hi || r < lo) return LLONG_MAX;
    if (l <= lo && hi <= r) return seg[i];
    return min(query(L(i), lo, M(lo,hi), l, r),
               query(R(i), M(lo,hi)+1, hi, l, r));
}
void update(int i, int lo, int hi, int pos, int val) {
    if (lo == hi) { seg[i] = val; return; }
    if (pos <= M(lo,hi)) update(L(i), lo, M(lo,hi), pos, val);
    else                 update(R(i), M(lo,hi)+1, hi, pos, val);
    seg[i] = min(seg[L(i)], seg[R(i)]);
}
```

### Segment Tree — Lazy Propagation  *(Range Update)*
```cpp
ll inp[SEG];
pair<ll,ll> ltree[4 * SEG];   // {lazy, sum}

void buildL(int i, int lo, int hi) {
    if (lo == hi) { ltree[i] = {0, inp[lo]}; return; }
    buildL(L(i), lo, M(lo,hi)); buildL(R(i), M(lo,hi)+1, hi);
    ltree[i].second = ltree[L(i)].second + ltree[R(i)].second;
}
void updateL(int i, int lo, int hi, int l, int r, ll val) {
    if (l > hi || r < lo) return;
    if (l <= lo && hi <= r) { ltree[i].second += (hi-lo+1)*val; ltree[i].first += val; return; }
    updateL(L(i), lo, M(lo,hi), l, r, val);
    updateL(R(i), M(lo,hi)+1, hi, l, r, val);
    ltree[i].second = ltree[L(i)].second + ltree[R(i)].second + (hi-lo+1)*ltree[i].first;
}
ll queryL(int i, int lo, int hi, int l, int r, ll carry = 0) {
    if (lo > r || hi < l) return 0;
    if (l <= lo && hi <= r) return ltree[i].second + carry*(hi-lo+1);
    ll c2 = carry + ltree[i].first;
    return queryL(L(i), lo, M(lo,hi), l, r, c2) + queryL(R(i), M(lo,hi)+1, hi, l, r, c2);
}
```

### Sparse Table  *(O(1) Range GCD / Min Query)*
```cpp
const int SP = 2e5 + 5;
ll sp_table[SP][21]; int sp_arr[SP];

void buildSparse(int n) {
    for (int i = 1; i <= n; i++) sp_table[i][0] = sp_arr[i];
    for (int j = 1; j <= 20; j++)
        for (int i = 1; i + (1<<j) - 1 <= n; i++)
            sp_table[i][j] = gcd(sp_table[i][j-1], sp_table[i+(1<<(j-1))][j-1]);
}
ll querySparse(int lo, int hi) {
    int k = __lg(hi - lo + 1);
    return gcd(sp_table[lo][k], sp_table[hi-(1<<k)+1][k]);
}
```

### DSU / Union-Find  *(O(α) per operation)*
```cpp
struct DSU {
    vector<int> sz, par;
    DSU(int n) : sz(n+1, 1), par(n+1) { iota(par.begin(), par.end(), 0); }
    int find(int u) { return par[u] = (par[u] == u) ? u : find(par[u]); }
    bool unite(int u, int v) {
        u = find(u); v = find(v);
        if (u == v) return false;
        if (sz[u] < sz[v]) swap(u, v);
        par[v] = u; sz[u] += sz[v]; return true;
    }
    bool connected(int u, int v) { return find(u) == find(v); }
};
```

### Monotonic Queue  *(Sliding Window Min)*
```cpp
// Minimum in every window of size k — O(n)
deque<int> dq;
for (int l = 0, r = 0; r < n; r++) {
    while (!dq.empty() && a[dq.back()] > a[r]) dq.pop_back();
    dq.push_back(r);
    if (dq.front() < l) dq.pop_front();
    if (r - l + 1 >= k) { cout << a[dq.front()] << ' '; l++; }
}
```

### Next Greater Element  *(Monotonic Stack)*
```cpp
int Right[N]; stack<int> st;
for (int i = n; i >= 1; i--) {
    while (!st.empty() && a[st.top()] <= a[i]) st.pop();
    Right[i] = st.empty() ? n + 1 : st.top();
    st.push(i);
}
```

### 2D Prefix Sum
```cpp
// Build — O(n*m)
for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
        v[i][j] += v[i][j-1] + v[i-1][j] - v[i-1][j-1];

// Query sum of rectangle (r1,c1)→(r2,c2) — O(1)
ll sum = v[r2][c2] - v[r1-1][c2] - v[r2][c1-1] + v[r1-1][c1-1];
```

---

## 🌐 Graph Theory

### Direction Vectors
```cpp
int dx[] = { 0, -1,  0,  1, -1,  1, -1,  1};
int dy[] = {-1,  0,  1,  0, -1, -1,  1,  1};
// L,  U,  R,  D,  LU, RU, RD, LD
```

### 0/1 BFS  *(O(V+E))*
```cpp
deque<int> dq;
vector<int> dis(n+1, INT_MAX);
dis[src] = 0; dq.push_back(src);
while (!dq.empty()) {
    int u = dq.front(); dq.pop_front();
    for (auto [v, w] : g[u]) {
        if (dis[u] + w < dis[v]) {
            dis[v] = dis[u] + w;
            (w == 0 ? dq.push_front(v) : dq.push_back(v));
        }
    }
}
```

### Prim's MST  *(O(E log E))*
```cpp
int primMST(int V, vector<pair<int,int>> *adj) {
    minHeap<pair<int,int>> pq;
    vector<int> vis(V, 0);
    pq.push({0, 0}); int sum = 0;
    while (!pq.empty()) {
        auto [w, u] = pq.top(); pq.pop();
        if (vis[u]) continue;
        vis[u] = 1; sum += w;
        for (auto [v, ww] : adj[u]) if (!vis[v]) pq.push({ww, v});
    }
    return sum;
}
```

### Dijkstra + Path Printing  *(O((V+E) log V))*
```cpp
vector<int> dijkstra(int src, int dst, vector<pair<int,int>> *g, int n) {
    vector<ll> dis(n+1, LLONG_MAX);
    vector<int> par(n+1); iota(par.begin(), par.end(), 0);
    minHeap<pair<ll,int>> pq;
    dis[src] = 0; pq.push({0, src});
    while (!pq.empty()) {
        auto [w, u] = pq.top(); pq.pop();
        if (dis[u] < w) continue;
        for (auto [v, ew] : g[u]) if (w + ew < dis[v]) {
            dis[v] = w + ew; par[v] = u; pq.push({dis[v], v});
        }
    }
    vector<int> path; int node = dst;
    while (par[node] != node) { path.push_back(node); node = par[node]; }
    path.push_back(src); reverse(all(path)); return path;
}
```

### BFS Path Printing on a Grid
```cpp
// Mark path directions while doing BFS
char path_dir[MAXN][MAXM];   // 'U','D','L','R'
// ... BFS loop:
// if (row < r)      path_dir[row][col] = 'U';
// else if (row > r) path_dir[row][col] = 'D';
// else if (col < c) path_dir[row][col] = 'L';
// else              path_dir[row][col] = 'R';

// Backtrack from destination (dr, dc):
list<char> ans;
while (path_dir[dr][dc] != 'A') {   // 'A' marks source
    ans.push_front(path_dir[dr][dc]);
    char d = path_dir[dr][dc];
    if (d == 'U') dr++;
    else if (d == 'D') dr--;
    else if (d == 'R') dc--;
    else               dc++;
}
```

### Tarjan — Bridges & Articulation Points
```cpp
int timer_v = 0;
int tin[N], low[N]; bool vis[N], is_ap[N];
vector<pair<int,int>> bridges;

void findBridges(int u, int p, vector<int> *g) {
    vis[u] = 1; low[u] = tin[u] = ++timer_v;
    for (int v : g[u]) {
        if (v == p) continue;
        if (!vis[v]) {
            findBridges(v, u, g);
            low[u] = min(low[u], low[v]);
            if (tin[u] < low[v]) bridges.push_back({u, v});
        } else low[u] = min(low[u], low[v]);
    }
}

void findAP(int u, int p, vector<int> *g) {
    int child = 0; vis[u] = 1; tin[u] = low[u] = timer_v++;
    for (int v : g[u]) {
        if (v == p) continue;
        if (!vis[v]) {
            findAP(v, u, g);
            low[u] = min(low[u], low[v]);
            if (low[v] >= tin[u] && p != -1) is_ap[u] = true;
            child++;
        } else low[u] = min(low[u], tin[v]);
    }
    if (p == -1 && child > 1) is_ap[u] = true;
}
```

### Kosaraju — Strongly Connected Components
```cpp
vector<bool> scc_vis;
void dfs1(int v, vector<vector<int>> const &g, vector<int> &ord) {
    scc_vis[v] = true;
    for (auto u : g[v]) if (!scc_vis[u]) dfs1(u, g, ord);
    ord.push_back(v);
}
void dfs2(int v, vector<vector<int>> const &rg) {
    scc_vis[v] = true;
    for (auto u : rg[v]) if (!scc_vis[u]) dfs2(u, rg);
}
int kosaraju(vector<vector<int>> const &g, int n) {
    vector<int> ord; scc_vis.assign(n+1, false);
    for (int i = 1; i <= n; i++) if (!scc_vis[i]) dfs1(i, g, ord);
    vector<vector<int>> rg(n+1);
    for (int v = 1; v <= n; v++) for (int u : g[v]) rg[u].push_back(v);
    scc_vis.assign(n+1, false); reverse(all(ord));
    int cnt = 0;
    for (auto v : ord) if (!scc_vis[v]) { dfs2(v, rg); cnt++; }
    return cnt;
}
```

### Hierholzer — Eulerian Circuit
```cpp
// Assumes edge[i] tracks whether edge i was used
stack<int> estk; vector<int> epath;
while (!estk.empty()) {
    int u = estk.top();
    if (!g[u].empty()) {
        auto [v, i] = g[u].back(); g[u].pop_back();
        if (edge[i]) continue;
        edge[i] = true; estk.push(v);
    } else { epath.push_back(u); estk.pop(); }
}
```

---

## 🌳 Tree Algorithms

### Binary Lifting  *(K-th Ancestor)*
```cpp
const int TN = 2e5 + 5;
vector<int> gtree[TN];
int anc[TN][21], dep[TN];

void binaryLift(int u, int p) {
    dep[u] = (u ? dep[p] + 1 : 0); anc[u][0] = p;
    for (int i = 1; i <= 20; i++)
        anc[u][i] = (anc[u][i-1] != -1) ? anc[anc[u][i-1]][i-1] : -1;
    for (auto v : gtree[u]) if (v != p) binaryLift(v, u);
}
int kthAnc(int node, int k) {
    if (dep[node] < k) return -1;
    for (int i = 20; i >= 0; i--)
        if (k & (1<<i)) { node = anc[node][i]; k -= (1<<i); }
    return node;
}
```

### LCA + Euler Tour Flattening
```cpp
const int LN = 3e5+5, LOG = __lg(LN)+1;
int level[LN], dp[LN][LOG], in_t[LN], out_t[LN];
int lca_arr[LN], flat[2*LN], tmr;
vector<int> ltree[LN];

void lcaDfs(int u, int p) {
    dp[u][0] = p; in_t[u] = ++tmr; flat[tmr] = lca_arr[u];
    level[u] = level[p] + 1;
    for (int i = 1; i < LOG; ++i) dp[u][i] = dp[dp[u][i-1]][i-1];
    for (auto v : ltree[u]) if (v != p) lcaDfs(v, u);
    flat[++tmr] = -lca_arr[u]; out_t[u] = tmr;
}
int lca(int u, int v) {
    if (level[u] < level[v]) swap(u, v);
    int d = level[u] - level[v];
    for (int i = 0; i < LOG; i++) if (d & (1<<i)) u = dp[u][i];
    if (u == v) return u;
    for (int i = LOG-1; i >= 0; i--)
        if (dp[u][i] != dp[v][i]) { u = dp[u][i]; v = dp[v][i]; }
    return dp[u][0];
}
```

### Tree Subtree Character Count  *(Palindrome / Parity Check)*
```cpp
// sbtr[u][c] = count of character c in subtree of u
const int MX = 2e5 + 5;
int sbtr[MX][26]; char ch[MX];

void dfs(int u, int par, vector<int> *tree) {
    sbtr[u][ch[u] - 'a'] = 1;
    for (auto v : tree[u]) {
        if (v == par) continue;
        dfs(v, u, tree);
        for (int i = 0; i < 26; i++) sbtr[u][i] += sbtr[v][i];
    }
}
// Path from u to v is palindrome iff at most 1 character has odd count
// Check: count odd frequencies in sbtr
```

---

## 🔲 Bit Manipulation

### Quick Reference Table
| Operation | Code |
|:---|:---|
| Check odd/even | `x & 1` (1 = odd) |
| Check K-th bit set | `x & (1 << k)` |
| Set K-th bit | `x \| (1 << k)` |
| Unset K-th bit | `x & ~(1 << k)` |
| Toggle K-th bit | `x ^ (1 << k)` |
| Multiply by 2^k | `x << k` |
| Divide by 2^k | `x >> k` |
| x mod 2^k | `x & ((1 << k) - 1)` |
| Divisible by 2^k | `(n & ((1 << k) - 1)) == 0` |
| Swap without temp | `x^=y; y^=x; x^=y;` |
| Count set bits | `__builtin_popcountll(x)` |
| Highest set bit index | `__lg(x)` |
| Lowest set bit index (1-idx) | `__builtin_ffs(x)` |
| Leading zeros | `__builtin_clzll(x)` |
| Trailing zeros | `__builtin_ctz(x)` |
| Convert bitset to `ll` | `bit.to_ullong()` — O(n) |

### XOR Properties
```cpp
// Set bits property
// If popcount(A) = X, popcount(B) = Y, popcount(A^B) = Z
// Z is even  iff (X + Y) is even
// Z is odd   iff (X + Y) is odd

// Conditional swap using XOR
// if (X == A) X = B; else X = A;   →   X = A ^ B ^ X;

// Sum identities
// A + B = (A ^ B) + 2*(A & B)
// A + B = (A | B) + (A & B)
```

### Bit Manipulation Macros
```cpp
#define least_one_pos(x)  __builtin_ffs(x)       // lowest set bit (1-indexed)
#define leading_zeros(x)  __builtin_clz(x)
#define trailing_zeros(x) __builtin_ctz(x)
#define num_of_ones(x)    __builtin_popcount(x)
#define msb(x)            (32 - __builtin_clz(x)) // index of MSB (1-indexed)
```

### Enumerate All Subsets  *(Bitmask)*
```cpp
// All subsets of n elements — O(2^n * n)
for (int mask = 0; mask < (1LL << n); mask++) {
    ll sum0 = 0, sum1 = 0;
    for (int i = 0; i < n; i++) {
        if (mask & (1LL << i)) sum1 += a[i];
        else                   sum0 += a[i];
    }
    res = min(res, abs(sum0 - sum1));
}
```

### Meet in the Middle  *(n ≤ 50, O(2^(n/2)))*
```cpp
vector<int> left_half, right_half;

// First half
for (int mask = 0; mask < (1 << (n/2)); mask++) {
    int s = 0;
    for (int i = 0; i < n/2; i++) if (mask & (1<<i)) s += v[i];
    left_half.push_back(s);
}
// Second half
for (int mask = 0; mask < (1 << (n - n/2)); mask++) {
    int s = 0;
    for (int i = 0, j = n/2; i < n - n/2; i++, j++) if (mask & (1<<i)) s += v[j];
    right_half.push_back(s);
}
sort(all(right_half));
// Binary search on right_half for each left_half value
```

---

## 📊 Dynamic Programming

### LCS — Longest Common Subsequence  *(with path printing)*
```cpp
string lcs(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = (a[i-1] == b[j-1]) ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1]);
    // Reconstruct
    int len = dp[n][m], idx = len - 1;
    string ans(len, '$');
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (a[i-1] == b[j-1]) { ans[idx--] = a[i-1]; i--; j--; }
        else if (dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    return ans;
}
```

### LIS — Longest Increasing Subsequence  *(O(n log n))*
```cpp
int lis(vector<int> &v) {
    vector<int> dp;           // dp[i] = smallest tail of IS of length i+1
    for (int x : v) {
        auto it = lower_bound(all(dp), x);
        if (it == dp.end()) dp.push_back(x);
        else *it = x;
    }
    return dp.size();
}
// For non-decreasing LIS replace lower_bound with upper_bound
```

---

## 🔤 String Algorithms

### Rolling Hash  *(Double Hash, 0-indexed)*
```cpp
const int HASH_N = 1700000;
const ll HMOD = 1e9 + 7;
const ll P[] = {97, 1000003};

ll pwr[2][HASH_N], inv_p[2][HASH_N];

void initHash() {
    for (int it = 0; it < 2; ++it) {
        pwr[it][0] = inv_p[it][0] = 1;
        ll INV_P = BigMod(P[it], HMOD - 2, HMOD);    // modular inverse of P[it]
        for (int i = 1; i < HASH_N; ++i) {
            pwr[it][i]   = pwr[it][i-1]   * P[it] % HMOD;
            inv_p[it][i] = inv_p[it][i-1] * INV_P % HMOD;
        }
    }
}

struct RangeHash {
    vector<int> h[2], rev[2];

    RangeHash(const string &S, bool doReverse = false) {
        for (int it = 0; it < 2; ++it) {
            h[it].resize(S.size() + 1, 0);
            for (int i = 0; i < (int)S.size(); ++i)
                h[it][i+1] = (h[it][i] + (ll)pwr[it][i+1] * (S[i]-'a'+1)) % HMOD;
            if (doReverse) {
                rev[it].resize(S.size() + 1, 0);
                for (int i = 0; i < (int)S.size(); ++i)
                    rev[it][i+1] = (rev[it][i] + (ll)inv_p[it][i+1] * (S[i]-'a'+1)) % HMOD;
            }
        }
    }

    ll get(int l, int r) {          // hash of S[l..r] (0-indexed, inclusive)
        if (l > r) return 0;
        ll a = (h[0][r+1] - h[0][l] + HMOD) % HMOD * inv_p[0][l+1] % HMOD;
        ll b = (h[1][r+1] - h[1][l] + HMOD) % HMOD * inv_p[1][l+1] % HMOD;
        return (a << 31) | b;
    }

    ll getReverse(int l, int r) {   // hash of reverse of S[l..r]
        if (l > r) return 0;
        ll a = (rev[0][r+1] - rev[0][l] + HMOD) % HMOD * pwr[0][r+1] % HMOD;
        ll b = (rev[1][r+1] - rev[1][l] + HMOD) % HMOD * pwr[1][r+1] % HMOD;
        return (a << 31) | b;
    }
};
// Usage: initHash(); RangeHash H(s); H.get(0, 2); (palindrome: H.get(l,r)==H.getReverse(l,r))
```

### Palindrome Check Using Hash  *(Online / Streaming)*
```cpp
// Supports: append-back, append-front, check palindrome
ll hf = 0, hr = 0, power = 1;
const ll HP = 131, HPMOD = 1e9 + 7;

// Append c to back:
void appendBack(char c) {
    int val = c - 'a' + 1;
    hf = (hf * HP + val) % HPMOD;
    hr = (hr + val * power) % HPMOD;
    power = power * HP % HPMOD;
}
// Append c to front:
void appendFront(char c) {
    int val = c - 'a' + 1;
    hf = (hf + val * power) % HPMOD;
    hr = (hr * HP + val) % HPMOD;
    power = power * HP % HPMOD;
}
// Is palindrome?
bool isPalindrome() { return hf == hr; }
```

### Hash Trick  *(Simple Polynomial Hash)*
```cpp
ll strHash(const string &s) {
    ll h = 97;
    for (char c : s) h = h * 29 + (c - 'a');
    return h;
}
// std::hash for strings:
hash<string> myhash;
size_t hv = myhash("any string");
```

### String Class Utilities
```cpp
stoll(s)              // string → long long     ("454" → 454)
stold(s)              // string → long double   ("3.14" → 3.14)
to_string(x)          // number → string

s.substr(pos, len)    // substring starting at pos, length len

// Find first occurrence
size_t pos = str.find(c);
if (pos != string::npos) { /* found */ }

// Find next occurrence
pos = str.find(c, pos + 1);
```

---

## 📐 Geometry

### Points with `std::complex`
```cpp
typedef complex<double> point;
#define px real()
#define py imag()

// Common operations (a, b are points; r is scalar; theta in radians)
// Vector add/sub:         a + b,  a - b
// Scalar multiply:        r * a
// Dot product:            (conj(a) * b).real()    // ax*bx + ay*by
// Cross product:          (conj(a) * b).imag()    // ax*by - ay*bx
// Squared distance:       norm(a - b)
// Euclidean distance:     abs(a - b)
// Angle (elevation):      arg(b - a)
// Slope of line (a,b):    tan(arg(b - a))
// Polar → Cartesian:      polar(r, theta)
// Cartesian → Polar:      {abs(p), arg(p)}
// Rotation (origin):      a * polar(1.0, theta)
// Rotation (pivot p):     (a - p) * polar(1.0, theta) + p
// Angle ABC:              abs(remainder(arg(a-b) - arg(c-b), 2.0*M_PI))
// Project p onto v:       v * dot(p,v) / norm(v)
// Project p onto line(a,b): a + (b-a) * dot(p-a, b-a) / norm(b-a)
// Reflect p across (a,b): a + conj((p-a)/(b-a)) * (b-a)

point intersection(point a, point b, point p, point q) {
    double c1 = (conj(p-a)*(b-a)).imag(), c2 = (conj(q-a)*(b-a)).imag();
    return (c1*q - c2*p) / (c1 - c2);   // undefined if parallel
}
```

> **Note:** `std::complex` does not support `std::cin`/`scanf`. Avoid using `x` and `y` as variable names if macrod.

### Geometry Utilities
```cpp
typedef pair<int,int> pt;

double triangleArea(double x1,double y1,double x2,double y2,double x3,double y3) {
    return abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0;
}

string orientation(int x1,int y1,int x2,int y2,int x3,int y3) {
    int v = (y2-y1)*(x3-x2) - (y3-y2)*(x2-x1);
    return v == 0 ? "Collinear" : (v > 0 ? "Clockwise" : "Counter-clockwise");
}

double distPoints(int x1,int y1,int x2,int y2) {
    return sqrt((double)(x2-x1)*(x2-x1) + (double)(y2-y1)*(y2-y1));
}

double angleBetweenVectors(double ax,double ay,double bx,double by) {
    return acos((ax*bx + ay*by) / (sqrt(ax*ax+ay*ay) * sqrt(bx*bx+by*by))) * 180.0 / M_PI;
}

// Convex Hull — Andrew's Monotone Chain O(n log n)
int crossPt(const pt &O, const pt &A, const pt &B) {
    return (A.first-O.first)*(B.second-O.second) - (A.second-O.second)*(B.first-O.first);
}
vector<pt> convexHull(vector<pt> P) {
    int n = P.size(), k = 0;
    if (n <= 3) return P;
    sort(P.begin(), P.end()); vector<pt> H(2*n);
    for (int i = 0; i < n; ++i) { while (k >= 2 && crossPt(H[k-2],H[k-1],P[i]) <= 0) k--; H[k++] = P[i]; }
    for (int i = n-2, t = k; i >= 0; --i) { while (k > t && crossPt(H[k-2],H[k-1],P[i]) <= 0) k--; H[k++] = P[i]; }
    H.resize(k-1); return H;
}
```

---

## 📅 Date & Calendar

```cpp
int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int y) { return (y%4==0 && y%100!=0) || (y%400==0); }

// Leap years in closed range [l, r]
ll leapYearsInRange(ll l, ll r) {
    auto count = [](ll x) { return x/4 - x/100 + x/400; };
    return count(r) - count(l - 1);
}
```

---

## 🧰 STL & Utility Hacks

### Ordered Set / Ordered Multiset
```cpp
ordered_set<int> S;
S.insert(5); S.insert(2); S.insert(8);
S.order_of_key(5);    // rank of 5 (0-indexed) → 1
*S.find_by_order(0);  // element at rank 0      → 2
// ordered_multiset allows duplicates (uses less_equal)
```

### Fast `unordered_map`
```cpp
unordered_map<int,int> mp;
mp.reserve(1 << 20);        // pre-allocate buckets
mp.max_load_factor(0.25);   // reduce collision probability
```

### Pair Hash for `unordered_map`
```cpp
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1,T2> &p) const {
        return hash<T1>()(p.first) ^ (hash<T2>()(p.second) << 1);
    }
};
unordered_map<pair<int,int>, int, pair_hash> mp;
```

### `__int128` I/O Overloads
```cpp
istream &operator>>(istream &is, __int128 &v) {
    string s; is >> s; v = 0;
    for (auto c : s) if (isdigit(c)) v = v*10 + c-'0';
    if (s[0] == '-') v *= -1;
    return is;
}
ostream &operator<<(ostream &os, const __int128 &v) {
    if (v == 0) return os << "0";
    __int128 num = v; if (v < 0) { os << '-'; num = -num; }
    string s; for (; num > 0; num /= 10) s += (char)(num%10 + '0');
    reverse(all(s)); return os << s;
}
```

### Useful Built-in Functions
```cpp
__lg(n)                   // floor(log2(n)), O(1),  n > 0
__builtin_popcountll(n)   // count set bits
__builtin_clzll(n)        // count leading zeros
__builtin_ctz(n)          // count trailing zeros
__builtin_ffs(n)          // 1-indexed position of lowest set bit

// Deduplication
vec.erase(unique(all(vec)), vec.end());

// Long double math functions
expl(x), logl(x), log10l(x), log2l(x), sqrtl(x), powl(x,y), cbrtl(x)
sinl(x), cosl(x), tanl(x)       // argument in radians

// log base change: log_b(a)
auto logBase = [](long double a, long double b){ return log2l(a)/log2l(b); };

// Degree ↔ Radian
double toRad(double d) { return d * acos(-1.0) / 180.0; }
double toDeg(double r) { return r * 180.0 / acos(-1.0); }
```

### Binary Search Templates
```cpp
// First index where predicate holds
int lo = 0, hi = n-1, ans = -1;
while (lo <= hi) {
    int mid = lo + (hi-lo)/2;
    if (check(mid)) { ans = mid; hi = mid-1; }
    else lo = mid+1;
}
// STL equivalents: lower_bound, upper_bound, equal_range
```

---

## 🧵 String & Character Utilities

### Input Handling
```cpp
// Read full line after integer
int t; cin >> t; cin.ignore();
while (t--) { string s; getline(cin, s); }

// scanf full line
char line[1000];
scanf("\n"); scanf("%[^\n]%*c", line);
```

### Conversions
```cpp
stoll(s)                         // string → long long
stold(s)                         // string → long double
to_string(x)                     // number → string
int toInt(string s) { int x; stringstream ss(s); ss>>x; return x; }
template<class T> string str(T v){ stringstream ss; ss<<v; return ss.str(); }
```

### Character Helpers
```cpp
bool isVowel(char c) { c=toupper(c); return string("AEIOU").find(c)!=string::npos; }
bool isConsonant(char c) { return isalpha(c) && !isVowel(c); }
int distChar(char a, char b) { return min(((a-b)+26)%26, ((b-a)+26)%26); }

// Print all substrings of s
for (int i = 0; i < sz(s); i++)
    for (int j = 1; j <= sz(s)-i; j++)
        cout << s.substr(i, j) << '\n';
```

---

## 🔬 Floating-Point Comparison

```cpp
const double EPS = 1e-9;
bool eq (double a, double b) { return fabs(a-b) <= EPS; }
bool neq(double a, double b) { return fabs(a-b) >  EPS; }
bool lt (double a, double b) { return a + EPS < b; }
bool gt (double a, double b) { return a > b + EPS; }
bool le (double a, double b) { return eq(a,b) || lt(a,b); }
bool ge (double a, double b) { return eq(a,b) || gt(a,b); }
```

---

## ⚡ I/O Optimization

```cpp
ios_base::sync_with_stdio(false); cin.tie(nullptr);   // Fast I/O

freopen("input.txt",  "r", stdin);    // File I/O
freopen("output.txt", "w", stdout);

cout << fixed << setprecision(6);     // Precision
```

---

## 🧪 Stress Testing Script

```bash
#!/usr/bin/bash
green=$(tput setaf 71); red=$(tput setaf 1); blue=$(tput setaf 32)
orange=$(tput setaf 178); bold=$(tput bold); reset=$(tput sgr0)

echo "Compiling..."
g++ -std=gnu++20 -O2 -DLOCAL -Wall -o gen   test_gen.cpp
g++ -std=gnu++20 -O2 -DLOCAL -Wall -o sol   sol.cpp
g++ -std=gnu++20 -O2 -DLOCAL -Wall -o brute brute.cpp

for ((i = 1; ; i++)); do
    ./gen > input.txt
    if diff -w <(./sol < input.txt) <(./brute < input.txt); then
        echo "${orange}test #$i: ${bold}${green}Accepted${reset}"
    else
        echo "${orange}test #$i: ${bold}${red}Wrong Answer${reset}"
        echo "${blue}Input:${reset}"; cat input.txt; break
    fi
done
```

---

## 🏆 Contest Mindset

### ✅ Final Checklist Before Submit

```
□ Array / memory size correct? Integer overflow?
□ Think twice, code once — all counter-cases checked?
□ Corner cases: n=0? n=1? k=0? Empty input? All same?
□ Output format correct? (spaces, newlines, "Case X: ")
□ Negative modulo: (ans - k % MOD + MOD) % MOD
□ Is your output format correct (including whitespace)?
□ Be confident — you might be ONE step from AC!
```

### 🔴 Wrong Answer

1. **Corner case** — n=1, k=0, all same values, empty array?
2. **Silly mistake** — wrong sign, off-by-one, wrong operator?
3. **Re-read the problem** — missing a hidden constraint?
4. **Rethink the approach** — what input breaks your logic?
5. **Stay calm.** This problem does not define your future.
6. **Move on** if stuck too long. A fresh mind is worth more.

### 🟡 Runtime Error

- [ ] All corner cases tested locally?
- [ ] Uninitialized variables / arrays?
- [ ] Out-of-bounds access on vector/array?
- [ ] Failing assertion?
- [ ] Division or modulo by zero?
- [ ] Infinite recursion / stack overflow?
- [ ] Invalidated iterator or dangling pointer?
- [ ] Memory limit exceeded?

### 🟠 Time Limit Exceeded

- [ ] Any infinite loop hiding?
- [ ] Actual complexity vs allowed? (does it fit within 10^8 ops?)
- [ ] Passing containers by value instead of reference?
- [ ] Heavy I/O without fast I/O?
- [ ] `map`/`set` → swap to `unordered_map`/array
- [ ] Second opinion from a teammate?

### 🟣 Memory Limit Exceeded

- [ ] Calculated theoretical max memory?
- [ ] Data structures cleared between test cases?

---

## 🧠 Problem-Solving Wisdom

> **"Do something instead of nothing, and stay organized."**

- 📝 **Write stuff down** — externalizing ideas prevents tunnel vision
- 🔄 **Unstuck rule** — stuck > 20 min? Change approach completely
- 🤝 **Fresh start** — rewrite from scratch or hand it to a teammate
- 🎯 **Think before typing** — wrong implementation costs more time than thinking
- 💪 **Believe** — the AC is often just one observation away

---

<div align="center">

**Built with ❤️ by AKASH ALAM**

*Competitive Programming is not just about writing correct code —*
*it's about training your mind to think clearly under pressure.*

</div>
