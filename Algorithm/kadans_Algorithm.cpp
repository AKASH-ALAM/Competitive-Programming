#include <bits/stdc++.h>
using namespace std;

int kadans(int arry[], int n) {
    int csum = arry[0], osum = arry[0];
    for (int i = 1; i < n; i++) {
        if (csum >= 0) csum += arry[i];
        else csum = arry[i];
        
        if (csum > osum) osum = csum;
        cout << csum << " " << osum << endl;
    }

    return osum;
}//for maximum subarray sum.

int main() {
    int n;  cin >> n;
    int *arry = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) cin >> arry[i];
    cout << kadans(arry, n) << endl;
    return 0;
}