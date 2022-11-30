#include <bits/stdc++.h>
using namespace  std;
    int is_prime(int n){
        int limit = sqrt(n+1);
        if(n <= 1) return 0;
        for(int i = 2; i <= limit; i++){
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
int main(){

    int n; cin >> n;
    int *array = (int *) malloc (sizeof(int) * n);
    int two  = 0;
    for(int i = 0; i < n; i++){
        cin >> array[i];
        if(array[i] == 2){
            two++;
        }
    } 
    
    int prnt = 0;

    for(int i = 0; i < n; i++){
        if(is_prime(prnt+1)){
            cout << "1";
            prnt++;
            if(i <= n-1) cout << " ";
        } else if(is_prime(prnt+2) && two){
            cout << "2";
            prnt += 2;
            two--;
            if(i <= n-1) cout << " ";
        } else {
            cout << "1";
            prnt++;
            if(i <= n-1) cout << " ";
        }
    } cout << endl << prnt << endl;
    return 0;
}