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
└── CP TEMPLATE LIBRARY - AKASH-ALAM.docx
```

---

##  Template

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

template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x)  → index of x (0-based), O(log n)
// find_by_order(x) → number of elements strictly less than x, O(log n)

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
<summary><strong>Sublime Text Build (Linux/Mac)</strong></summary>

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
<summary><strong>Sublime Text Build (Windows)</strong></summary>

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

### BigMod (Fast Modular Exponentiation)
```cpp
ll BigMod(ll B, ll P, ll M) {  // B^P % M
    ll R = 1;
    while (P > 0) {
        if (P & 1) R = (R * B) % M;
        P >>= 1;
        B = (B * B) % M;
    }
    return R;
}
ll ModInverse(ll number, ll mod) {  // mod must be prime
    return BigMod(number, mod - 2, mod);
}
```

### Extended Euclidean Algorithm (non-prime mod)
```cpp
// Returns gcd(a,b); x = modular inverse of a under mod b
int x, y;
int egcd(int a, int b) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
int modInverse(int A, int M) {
    egcd(A, M);
    return (x % M + M) % M;  // x may be negative
}
```

### Permutation & Combination

```cpp
// nPr without mod — O(r)
ll nPr(int n, int r) {
    ll ans = 1;
    while (r--) ans *= n--;
    return ans;
}

// nCr without mod — Pascal's Triangle O(r)
ll nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    if (n - r < r) r = n - r;
    ll p = 1;
    for (int i = 1; i <= r; i++) p = (p * (n - r + i)) / i;
    return p;
}

// nCr % MOD — precompute factorials O(n)
const int MX = 1e6 + 2;
ll fact[MX], inv_fact[MX];

void precalc() {
    fact[0] = 1;
    for (int i = 1; i < MX; i++) fact[i] = fact[i-1] * i % MOD;
    for (int i = 0; i < MX; i++) inv_fact[i] = BigMod(fact[i], MOD - 2, MOD);
}

ll nCr_mod(ll n, ll r) {
    return fact[n] % MOD * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}
// call precalc() in main before use
```

### Sieve of Eratosthenes

```cpp
const int SIEVE_N = 1e7;  // up to 1e8
bitset<SIEVE_N + 5> mark;
vector<ll> primes;

void sieve() {
    int sq = sqrt(SIEVE_N);
    for (int i = 4; i <= SIEVE_N; i += 2) mark[i] = 1;
    for (int i = 3; i <= sq; i += 2) {
        if (mark[i]) continue;
        for (int j = i * i; j <= SIEVE_N; j += 2 * i) mark[j] = 1;
    }
    for (int i = 2; i <= SIEVE_N; i++)
        if (!mark[i]) primes.push_back(i);
}
```

### Linear Sieve (Smallest Prime Factor)

```cpp
const int LS_N = 1e8 + 5;
vector<int> spf(LS_N + 1), lprimes;

void linearSieve() {
    for (int i = 2; i <= LS_N; ++i) {
        if (spf[i] == 0) { spf[i] = i; lprimes.push_back(i); }
        for (int j = 0; (ll)i * lprimes[j] <= LS_N; ++j) {
            spf[i * lprimes[j]] = lprimes[j];
            if (lprimes[j] == spf[i]) break;
        }
    }
}
```

### Euler's Phi Function

```cpp
// Single value — O(sqrt(N))
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            result -= result / i;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}

// All values 1..n — O(N log log N)
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    iota(phi.begin(), phi.end(), 0);
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
```

### Principle of Inclusion and Exclusion (PIE)

```cpp
// Count integers <= m divisible by at least one element of v
ll PIE(vector<int> &v, int n, ll m) {
    ll even = 0, odd = 0;
    for (int mask = 1; mask < (1LL << n); mask++) {
        ll tmp = m;
        for (int i = 0; i < n; i++)
            if (mask & (1LL << i)) tmp /= v[i];
        if (__builtin_popcountll(mask) & 1) odd += tmp;
        else even += tmp;
    }
    return odd - even;  // O(2^n * n)
}
```

### Derangements

```cpp
ll Derangements(ll n) {
    if (n == 1 || n == 2) return n - 1;
    ll a = 0, b = 1;
    for (ll i = 3; i <= n; ++i) {
        ll cur = ((i - 1) * (a + b)) % MOD;
        a = b; b = cur;
    }
    return b;
}
```

### Möbius Inversion

```cpp
const int MU_MX = 1e6 + 5;
int mu[MU_MX];

void mobius(int limit) {
    vector<int> mprimes;
    vector<bool> vis(limit + 1, false);
    mu[1] = 1;
    for (int i = 2; i <= limit; ++i) {
        if (!vis[i]) { mprimes.push_back(i); mu[i] = -1; }
        for (int p : mprimes) {
            if ((ll)i * p > limit) break;
            vis[i * p] = true;
            if (i % p == 0) { mu[i * p] = 0; break; }
            else mu[i * p] = -mu[i];
        }
    }
}
```

### Sum of Divisors

```cpp
ll divisorSum(int n) {
    if (n < 2) return 0;
    ll sum = 1;
    for (int i = 0; n != 1; i++) {
        int cnt = 1;
        while (n % primes[i] == 0) n /= primes[i], cnt++;
        sum *= (powl(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return sum;
}
```

### Pre-calculate Divisors 1 to N

```cpp
const int DIV_N = 1e5;
vector<int> divisors[DIV_N + 1];

void genDivisors() {
    for (int i = 1; i <= DIV_N; i++)
        for (int j = i; j <= DIV_N; j += i)
            divisors[j].push_back(i);
}
```

---

## 🗃️ Data Structures

### Segment Tree (Point Update, Range Query)

```cpp
const int SEG_LIM = 2e5 + 5;
int arr[SEG_LIM];
ll segTree[4 * SEG_LIM];

#define LEFT(idx)  (idx * 2)
#define RIGHT(idx) (idx * 2 + 1)
#define MID(lo,hi) ((lo + hi) / 2)

void build(int idx, int lo, int hi) {
    if (lo == hi) { segTree[idx] = arr[lo]; return; }
    int mid = MID(lo, hi);
    build(LEFT(idx), lo, mid);
    build(RIGHT(idx), mid + 1, hi);
    segTree[idx] = min(segTree[LEFT(idx)], segTree[RIGHT(idx)]);
}

ll query(int idx, int lo, int hi, int i, int j) {
    if (i > hi || j < lo) return LONG_MAX;
    if (i <= lo && hi <= j) return segTree[idx];
    int mid = MID(lo, hi);
    return min(query(LEFT(idx), lo, mid, i, j),
               query(RIGHT(idx), mid + 1, hi, i, j));
}

void update(int idx, int lo, int hi, int i, int val) {
    if (i > hi || i < lo) return;
    if (lo == hi) { segTree[idx] = val; return; }
    int mid = MID(lo, hi);
    update(LEFT(idx), lo, mid, i, val);
    update(RIGHT(idx), mid + 1, hi, i, val);
    segTree[idx] = min(segTree[LEFT(idx)], segTree[RIGHT(idx)]);
}
```

### Segment Tree with Lazy Propagation (Range Update)

```cpp
ll seg_input[SEG_LIM];
pair<ll, ll> lazy_tree[4 * SEG_LIM];  // {lazy, sum}

void buildLazy(int idx, int lo, int hi) {
    if (lo == hi) { lazy_tree[idx] = {0, seg_input[lo]}; return; }
    int mid = MID(lo, hi);
    buildLazy(LEFT(idx), lo, mid);
    buildLazy(RIGHT(idx), mid + 1, hi);
    lazy_tree[idx].second = lazy_tree[LEFT(idx)].second + lazy_tree[RIGHT(idx)].second;
}

void updateLazy(int idx, int lo, int hi, int i, int j, ll val) {
    if (i > hi || j < lo) return;
    if (i <= lo && hi <= j) {
        lazy_tree[idx].second += (hi - lo + 1) * val;
        lazy_tree[idx].first  += val;
        return;
    }
    int mid = MID(lo, hi);
    updateLazy(LEFT(idx), lo, mid, i, j, val);
    updateLazy(RIGHT(idx), mid + 1, hi, i, j, val);
    lazy_tree[idx].second = lazy_tree[LEFT(idx)].second
                          + lazy_tree[RIGHT(idx)].second
                          + (hi - lo + 1) * lazy_tree[idx].first;
}

ll queryLazy(int idx, int lo, int hi, int i, int j, ll carry = 0) {
    if (lo > j || hi < i) return 0;
    if (i <= lo && hi <= j) return lazy_tree[idx].second + carry * (hi - lo + 1);
    int mid = MID(lo, hi);
    ll carry2 = carry + lazy_tree[idx].first;
    return queryLazy(LEFT(idx),  lo,      mid, i, j, carry2)
         + queryLazy(RIGHT(idx), mid + 1, hi,  i, j, carry2);
}
```

### Sparse Table (Range Min/GCD — O(1) Query)

```cpp
const int SP_N = 2e5 + 5;
ll stree[SP_N][21];
int sp_arr[SP_N];

void buildSparse(int n) {
    for (int i = 1; i <= n; i++) stree[i][0] = sp_arr[i];
    for (int j = 1; j <= 20; j++)
        for (int i = 1; i + (1 << j) - 1 <= n; i++)
            stree[i][j] = gcd(stree[i][j-1], stree[i + (1 << (j-1))][j-1]);
}

ll querySparse(int lo, int hi) {
    int lg = __lg(hi - lo + 1);
    return gcd(stree[lo][lg], stree[hi - (1 << lg) + 1][lg]);
}
```

### Disjoint Set Union (DSU / Union-Find)

```cpp
struct DSU {  // O(alpha) per operation — effectively O(1)
    vector<int> Sz, Par;
    DSU(int n) : Sz(n + 1, 1), Par(n + 1) { iota(Par.begin(), Par.end(), 0); }

    int Find(int u) { return Par[u] = (Par[u] == u) ? u : Find(Par[u]); }

    bool Union(int u, int v) {
        u = Find(u); v = Find(v);
        if (u == v) return false;
        if (Sz[u] < Sz[v]) swap(u, v);
        Par[v] = u; Sz[u] += Sz[v];
        return true;
    }

    bool connected(int u, int v) { return Find(u) == Find(v); }
};
```

### Monotonic Queue (Sliding Window Min/Max)

```cpp
// Minimum value in every window of size k
int a[N], n, k;
deque<int> dq;

void slidingWindowMin() {
    int l = 0, r = 0;
    while (r < n) {
        while (!dq.empty() && a[dq.back()] > a[r]) dq.pop_back();
        dq.push_back(r);
        if (l > dq.front()) dq.pop_front();
        if (r - l + 1 >= k) {
            cout << a[dq.front()] << ' ';
            l++;
        }
        r++;
    }
}
```

### Next Greater Element (Monotonic Stack)

```cpp
int Right[N];
stack<int> st;

// Traverse right-to-left
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

// Query sum of subgrid (y1,x1) to (y2,x2) — O(1)
ll sum = v[y2][x2] - v[y1-1][x2] - v[y2][x1-1] + v[y1-1][x1-1];
```

---

## 🌐 Graph Theory

### Direction Vectors

```cpp
int dx[] = { 0, -1,  0,  1, -1,  1, -1,  1};
int dy[] = {-1,  0,  1,  0, -1, -1,  1,  1};
// L, U, R, D, LU, RU, RD, LD
```

### 0/1 BFS — O(V + E)

```cpp
// push_front for 0-weight edges, push_back for 1-weight edges
deque<int> dq;
vector<int> dis(n + 1, INT_MAX);
dis[src] = 0; dq.push_back(src);

while (!dq.empty()) {
    int u = dq.front(); dq.pop_front();
    for (auto [v, w] : g[u]) {
        if (dis[u] + w < dis[v]) {
            dis[v] = dis[u] + w;
            if (w == 0) dq.push_front(v);
            else        dq.push_back(v);
        }
    }
}
```

### Prim's MST — O(E log E)

```cpp
int primMST(int V, vector<pair<int,int>> *adj) {
    minHeap<pair<int,int>> pq;
    vector<int> vis(V, 0);
    pq.push({0, 0});
    int sum = 0;
    while (!pq.empty()) {
        auto [w, u] = pq.top(); pq.pop();
        if (vis[u]) continue;
        vis[u] = 1; sum += w;
        for (auto [v, adjw] : adj[u])
            if (!vis[v]) pq.push({adjw, v});
    }
    return sum;
}
```

### Dijkstra with Path Printing — O((V + E) log V)

```cpp
vector<int> dijkstra(int src, int dst, vector<pair<int,int>> *g, int n) {
    vector<ll> dis(n + 1, LLONG_MAX);
    vector<int> parent(n + 1);
    iota(parent.begin(), parent.end(), 0);
    minHeap<pair<ll,int>> pq;
    dis[src] = 0; pq.push({0, src});

    while (!pq.empty()) {
        auto [w, u] = pq.top(); pq.pop();
        if (dis[u] < w) continue;
        for (auto [v, edgw] : g[u]) {
            if (w + edgw < dis[v]) {
                dis[v] = w + edgw;
                parent[v] = u;
                pq.push({dis[v], v});
            }
        }
    }

    vector<int> path;
    int node = dst;
    while (parent[node] != node) { path.push_back(node); node = parent[node]; }
    path.push_back(src);
    reverse(path.begin(), path.end());
    return path;
}
```

### Tarjan's Algorithm (Bridges & Articulation Points)

```cpp
int timer_val = 0;
int tin[N], low[N];
bool vis[N], is_ap[N];
vector<pair<int,int>> bridges;

void findBridges(int u, int p, vector<int> *g) {
    vis[u] = 1; low[u] = tin[u] = ++timer_val;
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
    int child = 0; vis[u] = 1;
    tin[u] = low[u] = timer_val++;
    for (int v : g[u]) {
        if (v == p) continue;
        if (!vis[v]) {
            findAP(v, u, g);
            low[u] = min(low[u], low[v]);
            if (low[v] >= tin[u] && p != -1) is_ap[u] = 1;
            child++;
        } else low[u] = min(low[u], tin[v]);
    }
    if (p == -1 && child > 1) is_ap[u] = 1;
}
```

### Kosaraju's SCC Algorithm

```cpp
vector<bool> scc_vis;
void dfs1(int v, vector<vector<int>> const &g, vector<int> &order) {
    scc_vis[v] = true;
    for (auto u : g[v]) if (!scc_vis[u]) dfs1(u, g, order);
    order.push_back(v);
}

void dfs2(int v, vector<vector<int>> const &rg, vector<int> &comp) {
    scc_vis[v] = true;
    comp.push_back(v);
    for (auto u : rg[v]) if (!scc_vis[u]) dfs2(u, rg, comp);
}

int kosaraju(vector<vector<int>> const &g, int n) {
    vector<int> order;
    scc_vis.assign(n + 1, false);
    for (int i = 1; i <= n; i++) if (!scc_vis[i]) dfs1(i, g, order);

    vector<vector<int>> rg(n + 1);
    for (int v = 1; v <= n; v++) for (int u : g[v]) rg[u].push_back(v);

    scc_vis.assign(n + 1, false);
    reverse(order.begin(), order.end());
    int cnt = 0;
    for (auto v : order) {
        if (!scc_vis[v]) {
            vector<int> comp;
            dfs2(v, rg, comp);
            cnt++;
        }
    }
    return cnt;  // number of SCCs
}
```

### Hierholzer's Algorithm (Eulerian Circuit)

```cpp
// Assumes edge[i] tracks whether edge i is already used
stack<int> euler_st;
vector<int> euler_path;

while (!euler_st.empty()) {
    int u = euler_st.top();
    if (!g[u].empty()) {
        auto [v, i] = g[u].back();
        g[u].pop_back();
        if (edge[i]) continue;
        edge[i] = true;
        euler_st.push(v);
    } else {
        euler_path.push_back(u);
        euler_st.pop();
    }
}
```

---

## 🌳 Tree Algorithms

### Binary Lifting (K-th Ancestor)

```cpp
const int TREE_N = 2e5 + 5;
vector<int> tree[TREE_N];
int ancestor[TREE_N][21], dep[TREE_N];

void binaryLifting(int u, int p) {
    dep[u] = (u != 0) ? dep[p] + 1 : 0;
    ancestor[u][0] = p;
    for (int i = 1; i <= 20; i++)
        ancestor[u][i] = (ancestor[u][i-1] != -1)
                       ? ancestor[ancestor[u][i-1]][i-1] : -1;
    for (auto v : tree[u]) if (v != p) binaryLifting(v, u);
}

int kthAncestor(int node, int k) {
    if (dep[node] < k) return -1;
    for (int i = 20; i >= 0; i--)
        if (k & (1 << i)) { node = ancestor[node][i]; k -= (1 << i); }
    return node;
}
```

### LCA + Euler Tour Tree Flattening

```cpp
const int LCA_N = 3e5 + 5, LN = __lg(LCA_N) + 1;
int level[LCA_N], dp[LCA_N][LN], in_t[LCA_N], out_t[LCA_N];
int lca_arr[LCA_N], flat[2 * LCA_N], timer_cnt;
vector<int> lca_tree[LCA_N];

void lcaDfs(int u, int p) {
    dp[u][0] = p;
    in_t[u] = ++timer_cnt;
    flat[timer_cnt] = lca_arr[u];
    level[u] = level[p] + 1;
    for (int i = 1; i < LN; ++i) dp[u][i] = dp[dp[u][i-1]][i-1];
    for (auto v : lca_tree[u]) if (v != p) lcaDfs(v, u);
    flat[++timer_cnt] = -lca_arr[u];
    out_t[u] = timer_cnt;
}

int lca(int u, int v) {
    if (level[u] < level[v]) swap(u, v);
    int diff = level[u] - level[v];
    for (int i = 0; i < LN; ++i) if (diff & (1 << i)) u = dp[u][i];
    if (u == v) return u;
    for (int i = LN - 1; i >= 0; --i)
        if (dp[u][i] != dp[v][i]) { u = dp[u][i]; v = dp[v][i]; }
    return dp[u][0];
}
```

---

## 🔲 Bit Manipulation

| Operation | Code |
|:---|:---|
| Check odd / even | `(x & 1)` → 1 if odd |
| Check K-th bit | `(x & (1 << k))` |
| Set K-th bit | `(x \| (1 << k))` |
| Unset K-th bit | `(x & ~(1 << k))` |
| Toggle K-th bit | `(x ^ (1 << k))` |
| Multiply by 2^k | `(x << k)` |
| Divide by 2^k | `(x >> k)` |
| x mod 2^k | `x & ((1 << k) - 1)` |
| Swap without temp | `x ^= y; y ^= x; x ^= y;` |
| Count set bits | `__builtin_popcountll(x)` |
| Index of first set bit | `__builtin_ffs(x)` (1-indexed) |
| Index of highest set bit | `__lg(x)` |
| Count leading zeros | `__builtin_clzll(x)` |
| Count trailing zeros | `__builtin_ctz(x)` |

---

## 📐 Geometry

### Points with `std::complex`

```cpp
typedef complex<double> point;
#define xCoord real()
#define yCoord imag()

// Common operations (points a, b):
// Vector add / sub:     a + b,  a - b
// Scalar multiply:      r * a
// Dot product:          (conj(a) * b).real()   →  ax*bx + ay*by
// Cross product:        (conj(a) * b).imag()   →  ax*by - ay*bx
// Squared distance:     norm(a - b)
// Euclidean distance:   abs(a - b)
// Angle of elevation:   arg(b - a)
// Slope of line (a,b):  tan(arg(b - a))
// Polar to Cartesian:   polar(r, theta)
// Rotation (origin):    a * polar(1.0, theta)
// Rotation (pivot p):   (a - p) * polar(1.0, theta) + p
// Angle ABC:            abs(remainder(arg(a-b) - arg(c-b), 2.0*M_PI))

point intersection(point a, point b, point p, point q) {
    double c1 = (conj(p - a) * (b - a)).imag();
    double c2 = (conj(q - a) * (b - a)).imag();
    return (c1 * q - c2 * p) / (c1 - c2);
}
```

> **Note:** `std::complex` does not support `std::cin`. Do not macro `x` or `y` as local variable names.

### Geometry Utilities

```cpp
typedef pair<int, int> pt;

double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;
}

string orientation(int x1, int y1, int x2, int y2, int x3, int y3) {
    int val = (y2 - y1)*(x3 - x2) - (y3 - y2)*(x2 - x1);
    if (val == 0) return "Collinear";
    return (val > 0) ? "Clockwise" : "Counter-clockwise";
}

// Convex Hull — Andrew's Monotone Chain, O(n log n)
int cross_pt(const pt &O, const pt &A, const pt &B) {
    return (A.first - O.first) * (B.second - O.second)
         - (A.second - O.second) * (B.first - O.first);
}

vector<pt> convexHull(vector<pt> P) {
    int n = P.size(), k = 0;
    if (n <= 3) return P;
    sort(P.begin(), P.end());
    vector<pt> H(2 * n);
    for (int i = 0; i < n; ++i) {
        while (k >= 2 && cross_pt(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
    for (int i = n - 2, t = k; i >= 0; --i) {
        while (k > t && cross_pt(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
    H.resize(k - 1);
    return H;
}
```

---

## 📅 Date & Calendar

```cpp
int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Count leap years in closed range [l, r]
ll leapYearsInRange(ll l, ll r) {
    l--;
    auto count = [](ll x) { return x/4 - x/100 + x/400; };
    return count(r) - count(l);
}
```

---

## 🧰 STL & Utility Hacks

### Ordered Set (Policy-Based DST)

```cpp
ordered_set<int> S;
S.insert(5); S.insert(2); S.insert(8);
S.order_of_key(5);    // rank of 5 (0-indexed) → 1
*S.find_by_order(0);  // element at rank 0      → 2
```

### Fast `unordered_map`

```cpp
unordered_map<int,int> mp;
mp.reserve(1 << 20);
mp.max_load_factor(0.25);
```

### Pair Hash for `unordered_map`

```cpp
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const {
        return hash<T1>()(p.first) ^ (hash<T2>()(p.second) << 1);
    }
};
unordered_map<pair<int,int>, int, pair_hash> mp;
```

### `__int128` I/O Overloads

```cpp
istream &operator>>(istream &is, __int128 &v) {
    string s; is >> s; v = 0;
    for (auto &c : s) if (isdigit(c)) v = v * 10 + c - '0';
    if (s[0] == '-') v *= -1;
    return is;
}
ostream &operator<<(ostream &os, const __int128 &v) {
    if (v == 0) return os << "0";
    __int128 num = v;
    if (v < 0) { os << '-'; num = -num; }
    string s;
    for (; num > 0; num /= 10) s.push_back((char)(num % 10) + '0');
    reverse(s.begin(), s.end());
    return os << s;
}
```

### Useful Built-in Functions

```cpp
__lg(n)                  // floor(log2(n)), O(1), n > 0
__builtin_popcountll(n)  // count set bits
__builtin_clzll(n)       // leading zeros
__builtin_ctz(n)         // trailing zeros
__builtin_ffs(n)         // 1-indexed position of first set bit

// Remove duplicates from sorted vector
vec.erase(unique(vec.begin(), vec.end()), vec.end());

// Long double math
expl(x), logl(x), log10l(x), log2l(x)
sqrtl(x), powl(x,y), cbrtl(x)
sinl(x), cosl(x), tanl(x)  // argument in radians

// log_b(a) change of base
auto logBase = [](double a, double b) { return log2(a) / log2(b); };

// Degree <-> Radian
double toRad(double deg) { return deg * acos(-1.0) / 180.0; }
double toDeg(double rad) { return rad * 180.0 / acos(-1.0); }
```

---

## 🔍 Searching Algorithms

### Binary Search

```cpp
// First index where predicate is true
int lo = 0, hi = n - 1, ans = -1;
while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (check(mid)) { ans = mid; hi = mid - 1; }
    else lo = mid + 1;
}
```

### Ternary Search (Unimodal Function)

```cpp
// Finds minimum/maximum of a unimodal function on [lo, hi]
while (hi - lo >= 3) {
    int m1 = lo + (hi - lo) / 3;
    int m2 = hi - (hi - lo) / 3;
    if (f(m1) < f(m2)) lo = m1;  // swap condition for maximum
    else hi = m2;
}
```

---

## 🧵 String & Character Utilities

### Input Handling

```cpp
// Read full line after an integer
int t; cin >> t;
cin.ignore();
while (t--) {
    string s;
    getline(cin, s);
}

// scanf-style full line input
char c, s[100], line[1000];
scanf("%c", &c);
scanf("%s", s);
scanf("\n");
scanf("%[^\n]%*c", line);  // reads entire line including spaces
```

### Type Conversion

```cpp
int    toInt(string s) { int x; stringstream ss(s); ss >> x; return x; }
template<class T>
string str(T v) { stringstream ss; ss << v; return ss.str(); }
```

### Character Helpers

```cpp
bool isVowel(char c) {
    c = toupper(c);
    return c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}
bool isConsonant(char c) { return isalpha(c) && !isVowel(c); }

// Circular distance between two lowercase letters
int distChar(char a, char b) {
    return min(((a - b) + 26) % 26, ((b - a) + 26) % 26);
}

// Enumerate all substrings
for (int i = 0; i < (int)s.size(); i++)
    for (int j = 1; j <= (int)s.size() - i; j++)
        cout << s.substr(i, j) << '\n';
```

---

## 🔬 Floating-Point Comparison

```cpp
const double EPS = 1e-9;

bool eq(double a, double b)  { return fabs(a - b) <= EPS; }
bool neq(double a, double b) { return fabs(a - b) >  EPS; }
bool lt(double a, double b)  { return a + EPS < b; }
bool gt(double a, double b)  { return a > b + EPS; }
bool le(double a, double b)  { return eq(a,b) || lt(a,b); }
bool ge(double a, double b)  { return eq(a,b) || gt(a,b); }
```

---

## ⚡ I/O Optimization

```cpp
// Fast I/O — always add at start of main
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

// Local file I/O for testing
freopen("input.txt",  "r", stdin);
freopen("output.txt", "w", stdout);

// Fixed precision output
cout << fixed << setprecision(6);
```

---

## 🧪 Stress Testing (Bash)

```bash
#!/usr/bin/bash
green=$(tput setaf 71); red=$(tput setaf 1)
blue=$(tput setaf 32); orange=$(tput setaf 178)
bold=$(tput bold); reset=$(tput sgr0)

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
        echo "${blue}Input:${reset}"
        cat input.txt
        break
    fi
done
```

---

## 💡 Key Mathematical Facts

| Fact | Value / Formula |
|:---|:---|
| `√N` perfect squares up to N | `floor(√N)` |
| Only perfect squares have odd # of divisors | ✓ |
| Max distinct prime factors of N | `O(log N)` |
| Max divisors of N ≤ 10^6 | ~240 |
| Harmonic sum ≤ N | `O(log N)` |
| Prime gap near N | `≈ ln(N)` |
| Primes up to 10^7 | ~620,000 |
| log₂(10^18) | ≈ 60 |

---

## 🏆 Contest Mindset

### ✅ Final Checklist Before Submit

```
□ Array / memory size correct? Integer overflow?
□ Checked all obvious counter-cases?
□ Corner cases: n=0? n=1? k=0? k=1? Empty input?
□ Output format correct? (spaces, newlines, "Case X: ")
□ Negative modulo: (ans - k % MOD + MOD) % MOD
□ Is your output format correct (including whitespace)?
□ Be confident — you might be ONE step from AC!
```

### 🔴 Wrong Answer

1. Corner case — n=1, k=0, all same values?
2. Dumb mistake — wrong sign, wrong index, wrong operator?
3. Re-read the problem — missing a hidden constraint?
4. Re-verify the approach — what input breaks your logic?
5. **Stay calm.** This problem does not define your future.
6. Move on if stuck. A fresh perspective later is worth more.

### 🟡 Runtime Error

- [ ] All corner cases tested locally?
- [ ] Uninitialized variables?
- [ ] Out-of-bounds array/vector access?
- [ ] Failing assertion?
- [ ] Division or modulo by zero?
- [ ] Infinite recursion / stack overflow?
- [ ] Invalidated iterator or dangling pointer?
- [ ] Memory limit hit?

### 🟠 Time Limit Exceeded

- [ ] Infinite loop hiding somewhere?
- [ ] Actual complexity vs allowed complexity?
- [ ] Passing containers by value instead of reference?
- [ ] Heavy I/O without fast I/O or `scanf`?
- [ ] `map` / `set` → swap to `unordered_map` / array
- [ ] Second opinion from a teammate?

### 🟣 Memory Limit Exceeded

- [ ] Theoretical maximum memory calculated?
- [ ] Data structures properly cleared between test cases?

---

## 🧠 Problem-Solving Wisdom

> **"Do something instead of nothing, and stay organized."**

- 📝 **Write stuff down** — externalizing ideas prevents tunnel vision
- 🔄 **Unstuck rule** — if you're stuck > 20 min, change your approach entirely
- 🤝 **Fresh start** — rewrite from scratch or hand it to a teammate
- 🎯 **Think before typing** — a wrong implementation costs more time than thinking
- 💪 **Believe in yourself** — the AC might be just one observation away

---

<div align="center">

**Built with ❤️ by AKASH ALAM**

*Competitive Programming is not just about writing correct code —*
*it's about training your mind to think clearly under pressure.*

</div>
