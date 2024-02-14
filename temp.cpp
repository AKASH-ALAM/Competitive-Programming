#include <bits/stdc++.h>

using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int 	      long long
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
const int N = 2e5 + 5;
int n, a[N];

int l = 1, r = n, sl = 1, sr = n;
void func() {
	l = 1, r = n, sl = 1, sr = n;
	int x = a[l];
	while (l <= n and a[l] == x) l++;
	x = a[r];
	while (r >= 1 and a[r] == x) r--;
	while (sl < sr and a[sl] == a[sr]) {
		sr--, sl++;
	}
}
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	func();
	int ans1 = (n - l + 1);
	int ans2 = (r - 1 + 1);
	cout << min({ans1, ans2, (sr - sl + 1)}) << '\n';
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