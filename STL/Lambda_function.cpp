/**
 *  Author  : Pnictogen
 *  Task    :
 *  Algo    :
**/
#include <bits/stdc++.h>
using namespace std;

/* input
5
Mickey 1 10 1991
Alice 30 12 1990
Tom 15 8 1993
Jerry 18 9 1990
Garfield 20 9 1990
*/
struct ob {
	string s;
	int d, m, y;
};

void solve() {
	vector <ob> v; // vector of structure
	int n, d, m, y;	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s >> d >> m >> y;
		v.push_back({s, d, m, y});
	}


	sort(v.begin(), v.end(), [](ob a, ob b) { //Lambda function or inline comparator function
		return (a.y > b.y) or (a.y == b.y and a.m > b.m) or (a.m == b.m and a.d > b.d);
	});


	cout << v[0].s << endl << v[n - 1].s << endl;
}
int main() {

	int t = 1;	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}