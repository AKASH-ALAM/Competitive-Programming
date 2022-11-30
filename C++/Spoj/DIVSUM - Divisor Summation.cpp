#include <bits/stdc++.h>
using namespace std;
 
int divisor_sum(int n){
    int sum = 1;
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            if(i*i == n){
                sum += i;
            } else {
                sum += i;
                sum += n / i;
            }
        }
    }
    return sum;
}
 
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        cout << divisor_sum(n) << endl;
    }
    return 0;
}