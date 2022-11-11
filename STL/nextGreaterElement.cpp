#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int arry[N], ans[N];

int main() {
	int n;	cin >> n;
	for (int i = 1; i <= n; i++)	cin >> arry[i];

	stack <int> s;

	for (int i = n; i >= 0; i--) { // we iterate from back
		while (!s.empty() and s.top() <= arry[i]) {
			s.pop();
		}
		if (s.empty()) {
			ans[i] = -1;
		} else {
			ans[i] = s.top();
		}

		s.push(arry[i]);
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << " ";

	cout << endl;
	return 0;
}