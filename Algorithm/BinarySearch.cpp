#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int size;   cin >> size;
    int *array = (int*) malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++) cin >> array[i];
    cout << "X : ";
    int x;  cin >> x;
    auto k = lower_bound(array, array+size, x) - array;
    if(k < size and array[k] == x) cout << x << " is found of index : " << k;
    else cout << "Not found" << endl;
    auto b = upper_bound(array, array+size, x) - array;
    cout << " and the last index of : " << b-1 << endl;
    auto r = equal_range(array, array+size, x);
    cout << "The value of " << x << " is appears of " << r.second - r.first << " times" << endl;
}