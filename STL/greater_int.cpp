/**
 *  Author  : Pnictogen
 *  Task    :
 *  Algo    :
**/
#include <bits/stdc++.h>
using namespace std;

int main() {

	set <int, greater<int>> s; // descending order
	s.insert(10);
	s.insert(20);
	s.insert(50);
	s.insert(40);

	for (auto i : s) cout << i << endl;

	return 0;
}