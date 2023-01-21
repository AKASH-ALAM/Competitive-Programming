#include <bits/stdc++.h>
using namespace std;

bool printF(int idx, int size, vector <int> &v, int a[], int sum, int n){
    if(idx == size){
        if(sum == n){ // it will just print one subset of desired sum.
            for(auto it : v) cout << it << " ";
            cout << endl;
            return true;
        } return false;
    }
    v.push_back(a[idx]);
    n += a[idx];
    if(printF(idx + 1, size, v, a, sum, n) == true) return true;
    n -= a[idx];
    v.pop_back();
    if(printF(idx + 1, size, v, a, sum, n) == true) return true;
    return false;
}

int main(){
    int a[] = {1, 2, 1}, sum = 2;
    vector <int> v;
    printF(0, sizeof(a)/sizeof(a[0]), v, a, sum, 0);
    return 0;
}