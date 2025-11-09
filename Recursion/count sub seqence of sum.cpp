#include <bits/stdc++.h>
using namespace std;

int printF(int indx, int size, int a[], int sum, int n){
    if(indx == size){
        if(sum == n) return 1;
        else return 0;
    }
    n += a[indx];
    int l = printF(indx + 1, size, a, sum, n);
    n -= a[indx];
    int r = printF(indx + 1, size, a, sum, n);
    return l + r;
}

int main(){
    int a[] = {1, 2, 1}, sum = 2;
    int size = sizeof(a) / sizeof(a[0]);
    cout << printF(0, size, a, sum, 0) << endl;
    return 0;
}