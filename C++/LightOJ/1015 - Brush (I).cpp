#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int n, total = 0; cin >> n;
        int *array = (int *) malloc (sizeof(int) * n);
        for(int j = 0; j < n; j++) {
            cin >> array[j];
            if(array[j] > 0) total += array[j];
        } cout <<"Case " << i <<": "<< total << endl; 
    } return 0;
}