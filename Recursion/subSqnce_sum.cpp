#include <bits/stdc++.h>
using namespace std;

void printF(int idx, int size, vector <int> &v, int a[],int sum, int n){
    if(idx == size){
        if(n == sum){ // it will print every sub sequences that sum equal to desired sum
            for(auto it : v) cout << it << " ";
            cout << endl;
            return;
        } return;
    }
    v.push_back(a[idx]);
    n += a[idx];
    printF(idx+1, size, v, a, sum, n);
    n -= a[idx];
    v.pop_back();
    printF(idx+1, size, v, a, sum, n);
}
int main(){
    int a[] = {1, 2, 1};
    int sum = 2;
    vector <int> empty;
    printF(0, sizeof(a) / sizeof(a[0]),empty, a, sum, 0);
    return 0;
}