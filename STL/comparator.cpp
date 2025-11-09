/**
 *  Author  : Pnictogen
 *  Task    :
 *  Algo    :
**/
#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int>x, pair<int, int> y) {
	return (x.first < y.first) or (x.first == y.first and x.second > y.second);
}

void solve() {
	vector <pair <int, int> > v;
	int n, x, y;	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), comparator);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
}
int main() {
	int t = 1;	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}