/**
 *  Author  : Pnictogen
 *  Date    : 2022-11-28 22:48:01
 *  Task    : subset
**/
#include <bits/stdc++.h>
using namespace std;

bool check(int x, int i) {
    return (x & (1 << i));
}

void solve(){
    vector <int> v = { 1, 2, 3 };
    int size = 1 << v.size();
    for (int mask = 0; mask < size; mask++) {
        for (int i = 0; i < 3; i++) {
            if (check(mask, i)) {
                cout << v[i] << ' ';
            }
        }cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
