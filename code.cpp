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
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 5e5 + 5;
int cs = 1;

int n, m, q;
int population[MX];
stack<int> st[MX];
vector<pair<int,int>> edges;
vector<pair<int, pair<int,int>>> query;
multiset<int> mt;

struct DSU {
    vector<int> Sz, Par;
    DSU (int n) {
        Sz.assign(n + 1, 0);
        Par.assign(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            Par[i] = i;
            Sz[i] = 1;
            // population[i] already initialized by caller
            if (!st[i].empty()) {
                // population[i] already set to st[i].top() by caller (we do that before calling DSU)
                mt.insert(population[i]);
            } else {
                // if empty stack, population[i] is 0 and we choose not to insert 0 into mt
                // (that's a design choice — keep as original)
            }
        }
    }

    int Find (int u) {
        return Par[u] = (Par[u] == u ? u : Find(Par[u]));
    }

    void Union (int u, int v) {
        u = Find(u); v = Find(v);
        if (u == v) return;
        if (Sz[u] < Sz[v]) swap(u, v);

        Par[v] = u;
        Sz[u] += Sz[v];

        auto it1 = mt.find(population[u]);
        if (it1 != mt.end()) mt.erase(it1);
        auto it2 = mt.find(population[v]);
        if (it2 != mt.end()) mt.erase(it2);

        population[u] += population[v];
        mt.insert(population[u]);
    }
};

void solve(){
    cin >> n >> m >> q;

    // --- clear globals used across runs ---
    edges.clear();
    query.clear();
    mt.clear();
    for (int i = 1; i <= n; ++i) {
        while (!st[i].empty()) st[i].pop();
    }
    // initialize population to 0
    for (int i = 1; i <= n; ++i) population[i] = 0;

    // read initial node top-values
    for (int i = 1; i <= n; ++i) {
        int val; cin >> val;
        st[i].push(val);
        population[i] = val; // set initial top into population (will be used by DSU ctor)
    }

    // read edges
    edges.reserve(m);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<char> have(m, 0);

    // read queries and push additions onto stacks so DSU sees final top-values
    for (int i = 0; i < q; ++i) {
        char type; cin >> type;
        if (type == 'D') {
            int k; cin >> k;
            --k; // convert to 0-based edge index
            query.push_back({0, {k, -1}});
            if (k >= 0 && k < m) have[k] = 1;
        } else {
            int u, x; cin >> u >> x;
            query.push_back({1, {u, x}});
            st[u].push(x);
            // update population[u] to reflect top-of-stack (will be used when DSU constructor reads)
            population[u] = st[u].top();
        }
    }

    // Build DSU for final graph (after deletions)
    DSU ds(n);

    // union all edges that are NOT deleted
    for (int i = 0; i < m; ++i) {
        if (!have[i]) ds.Union(edges[i].first, edges[i].second);
    }

    // We'll record states while reversing queries.
    // Standard approach: push final state, then reverse apply queries and push state after each reversal.
    vector<int> ans;
    ans.reserve(q + 1);
    // push current maximum (0 if mt empty)
    if (!mt.empty()) ans.push_back(*mt.rbegin());
    else ans.push_back(0);

    // reverse-process all queries
    for (int i = q - 1; i >= 0; --i) {
        int type = query[i].first;
        if (type == 0) {
            // reversed deletion -> add (union) the edge back
            int idx = query[i].second.first;
            int u = edges[idx].first;
            int v = edges[idx].second;
            ds.Union(u, v);
        } else {
            // reversed addition: original was "push x onto st[u]" -> we must pop x now
            int u = query[i].second.first;
            int x = query[i].second.second;

            int par = ds.Find(u);
            // remove current component value from multiset (if present)
            auto it = mt.find(population[par]);
            if (it != mt.end()) mt.erase(it);

            // current top (oldTop) should be x (but check)
            int oldTop = (!st[u].empty() ? st[u].top() : 0);
            // pop the last pushed value (reverse the earlier push)
            if (!st[u].empty()) st[u].pop();
            int newTop = (!st[u].empty() ? st[u].top() : 0);

            // adjust population of the component
            // population[par] = population[par] - oldTop + newTop
            population[par] += (newTop - oldTop);

            // re-insert updated component value
            mt.insert(population[par]);
        }
        // push current max after this reversal step
        if (!mt.empty()) ans.push_back(*mt.rbegin());
        else ans.push_back(0);
    }

    // ans[0] = after all q queries, ans[1] = after q-1 queries, ..., ans[q] = initial before any query
    // we want outputs after each prefix of original queries: A1..Aq = ans[q-1], ans[q-2], ..., ans[0]
    for (int j = q - 1; j >= 0; --j) {
        cout << ans[j] << '\n';
    }
}

int main() {
    unsyncIO;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
