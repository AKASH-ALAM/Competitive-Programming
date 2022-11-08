/**
 *  Author  : Pnictogen
 *  Task    :
 *  Algo    :
**/
#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define fi            first
#define se            second
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
using pii = pair<int, int>;
using pll = pair<ll, ll>;

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

struct ob {
	string s;
	int d, m, y;
};

void solve() {
	vector <ob> v;
	int n, d, m, y;	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s >> d >> m >> y;
		v.push_back({s, d, m, y});
	}
	sort(v.begin(), v.end(), [](ob a, ob b) {
		return (a.y > b.y) or (a.y == b.y and a.m > b.m) or (a.m == b.m and a.d > b.d);
	});

	//for (auto i : v) cout << i.s << " " << i.d << " " << i.m << " " << i.y << endl;
	cout << v[0].s << endl << v[n - 1].s << endl;
}
int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;

	int t = 1;	//cin >> t;

	while (t--) {
		solve();
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}