#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int s;
    cout << "Insert your L.C.M size : ";
    cin >> s;
    int *array = (int*) malloc(sizeof(int) * s);
    for(int i = 0; i < s; i++) cin >> array[i];
    int lcm = 1;
    bool ch = true;
    for(int i = 2; i <= 10; i++){
        for(int j = 0; j < s; j++){
            if(array[j] % i == 0){
                array[j] /= i;
                if(ch){
                    lcm *= i;
                    ch = false;
                }
            }
        } if(ch == false) i--;
        ch = true;
    }
    
    for(int i = 0; i < s; i++){
        lcm *= array[i];
    } cout << "The L.C.M is : " << lcm << endl;

    return 0;
}