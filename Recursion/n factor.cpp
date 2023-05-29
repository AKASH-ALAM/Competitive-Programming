#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using ll = long long;
using ld = long double;
using namespace __gnu_pbds;
using ull = unsigned long long;

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define sz(x)         (int)x.size()
#define toint(a)      atoi(a.c_str())
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define mem(a,x)      memset(a,x,sizeof(a))
#define testcase      cout << "Case " << cs++ << ":"
string  tostr(int n)  {stringstream rr; rr << n; return rr.str();}
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)
typedef tree <int,    null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif

void solve() {
    string cmd;
    stack <string> backword;
    stack <string> forword;
    while (1) {
        cin >> cmd;
        if (cmd == "QUIT") break;
        string cur_page;
        if (cmd == "VISIT") {
            string url; cin >> url;
            backword.push(url);
            cur_page = url;
            while (!forword.empty()) forword.pop();
            cout << cur_page << endl;
        }
        else if (cmd == "BACK") {
            if (backword.empty()) cout << "Ignored" << endl;
            else {
                forword.push(cur_page);
                cur_page = backword.top();
                backword.pop();
                cout << cur_page << endl;
            }
        }
        else if (cmd == "FORWARD") {
            if (forword.empty()) cout << "Ignored" << endl;
            else {
                backword.push(cur_page);
                cur_page = forword.top();
                forword.pop();
                cout << cur_page << endl;
            }
        }
    }
}

int main() {

#ifdef LOCAL
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;
    int t = 1;
    cin >> t;

    //cin.ignore();
    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}