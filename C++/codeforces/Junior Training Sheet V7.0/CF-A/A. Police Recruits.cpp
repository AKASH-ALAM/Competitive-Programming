#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int array[n], hire = 0, untreated = 0;
    for(int i = 0; i < n; i++) cin >> array[i];

    for(int i = 0; i < n; i++){
        if(array[i] > 0){
            if(array[i] > 10){
                hire += 10;
            } 
            else hire += array[i];
            
        } 
        else if(hire == 0 && array[i] == -1) untreated++;
        else if(array[i] == -1) hire--;
    }
    
    cout << untreated << endl;
    return 0;
}