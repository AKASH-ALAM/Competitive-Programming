/**
 *  Author  : Pnictogen
 *  Date    : 2022-12-06 15:48:17
 *  Task    : subset_musk
**/
#include <bits/stdc++.h>
using namespace std;

bool subset_mask(int x, int y) {
    return ((x & y) == y);
}

bool check(int x, int i) {
    return (x & (1 << i));
}

int main() {
    vector <int> a = { 1, 2, 3, 4, 5 };
    /*
    make subset using 2, 3, and 5
    but you can't use any arry
    here 2,3,5 represent in binary : 10110 = 22
    x = 10110
    y = 00110
    ----------
  ans = 00110
    if ans == y then y is subset of x
    */
    int s_mask = 22;
    int limit = 1 << 5;

    for (int mask = 1; mask < limit; mask++) { // O(2^N)
        if (subset_mask(s_mask, mask)) { // O(11)
            for (int i = 0; i < a.size(); i++) { // O(N)
                if (check(mask, i)) cout << a[i] << " ";
            } cout << endl;
        }
    } // so overall time complexity : O(N * 2^N)

    return 0;
}