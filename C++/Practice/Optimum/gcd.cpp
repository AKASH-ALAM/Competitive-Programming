#include <bits/stdc++.h>
using namespace std;
int gcd_fun(int x, int y){
    if(x == 0) return y;
    return gcd_fun(y % x, x);
}
int main(){
    int a, b;   cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is : " << gcd_fun(a, b) << endl;
    return 0; 
}