/**
 *  Author  : Pnictogen
 *  Date    : 2022-12-01 17:00:58
 *  Task    : Total_sum_of_all_pair_Xor
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < 31; i++) {
        int cntO = 0, cntZ = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] & (1 << i)) cntO++;
            else cntZ++;
        }
        sum += (cntZ * cntO) * (1 << i);
    }
    cout << sum << endl;
    return 0;
}