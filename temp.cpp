#include <iostream>
using namespace std;

int main() {
	int r, c;	cin >> r >> c;
	int a[r][c], b[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) cin >> a[i][j];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) cin >> b[i][j];
	}
	int ans[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) ans[i][j] = 0;
	}

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < r; j++) {
			for (int l = 0; l < c; l++) {
				ans[i][j] += (a[i][l] * b[l][j]);
			}
		}

	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) cout << ans[i][j] << ' ';
		cout << endl;
	}
}
