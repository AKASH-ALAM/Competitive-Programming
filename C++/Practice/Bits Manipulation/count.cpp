/**
 *  Author  : Pnictogen
 *  Date    : 2022-11-30 16:32:28
 *  Task    : count
**/
#include <bits/stdc++.h>
using namespace std;

int anotherWay(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n & (n - 1);
    }
    return cnt;
} // best case : O(1) and worst case : O(n)


int main() {
    int t, n;   cin >> t;
    while (t--) {
        cin >> n;
        int cnt2 = anotherWay(n);
        int cnt = 0;
        while (n != 0) {
            if (n & 1 != 0) cnt++;
            n = n >> 1; // n / 2^1 : it's right shifting 
        }
        cout <<"cnt : " <<  cnt << " cnt2 : " <<cnt2 << endl;
    }

}

/* cnt working like this
time complexity : O (log2 n)
1101
0001
----
0001

0110
0001
----
0000

0011
0001
----
0001

0001
0001
----
0001

0000
0001
----
0000 */
