#include <iostream>
#include <math.h>
using namespace std;
#define length 15001
#define endl '\n'

bool is_prime(int n){
    int limit = sqrt(n+1);
    for(int i = 2; i <= limit; i++){
        if(n % i == 0){
            return false;
        }
    } return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int array[length], n, in, j = 1;
    array[0] = 2;
    
    for(int i = 3; j <= 15001; i += 2){
        if(is_prime(i)){
            array[j] = i;
            j++;
        } 
    }
    cin >> n;
    while(n--){
        cin >> in;
        cout << array[in-1] << endl;
    }
    return 0;
}