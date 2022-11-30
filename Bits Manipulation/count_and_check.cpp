/**
 *  Author  : Pnictogen
 *  Date    : 2022-11-28 18:58:58
 *  Task    : count_and_check
**/
#include <bits/stdc++.h>
using namespace std;

int Set(int x, int index) {
	return (x | (1 << index)); // set the index bit
}

bool check(int value, int index) {
	return (value & (1 << index));
} // check which bit set or not.

int Flip(int value, int index) {
	return (value ^ (1 << index)); // 0 to 1 and 1 to 0 (toggle)
}

void solve() {
	// 1010 (it's a binary of 10)
	// 0100 (make left shift 2 times of 1)
// = -------
	// 1110 (after set bit no - 2, the value become : 14)
    int n = 10, i = 2;
    cout << "After set " << i << " no bit of " << n << " is become : ";
    int value = Set(10, 2);
	cout << value << endl;

	cout << "1 : means set\n0 : means not set : ";
	cout << check(value, 3);
	cout << check(value, 2);
	cout << check(value, 1);
	cout << check(value, 0) << endl;

	int cnt = 0;
	//value = 100;
	for (int i = 0; i < 30; i++) {
		cnt += check(value, i);
	}
	cout << value << " have set " << cnt << " bits" << endl;
}

int main() {

    solve();
    
    return 0;
}
