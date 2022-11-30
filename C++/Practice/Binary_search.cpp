#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int n, int x){
    int k = 0;
    for(int b = n/2; b >= 1; b /= 2){
        while(k+b < n && array[k+b] <= x)   k += b;
        if(array[k] == x) return k;
    }
    return 0;
}

int main(){
    int size;   cin >> size;
    int array[size];    
    for(int i = 0; i < size; i++) cin >> array[i];
    int x;  cin >> x;
    x = binarySearch(array, size, x);
    if(x) cout << "The value found of index : " << x <<endl;
    else cout << "Not found!" << endl;

    return 0;
}