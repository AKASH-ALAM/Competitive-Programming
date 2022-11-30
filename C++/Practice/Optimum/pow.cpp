#include <bits/stdc++.h>
using namespace std;

int pow_fun(int b, int p){
    if(p == 0) return 1;
    return b * pow_fun(b, p - 1);
}
int main(){
    int base, pow;  cin >> base >> pow;
    cout << base << "^" << pow << " = " << pow_fun(base, pow) << endl;
    return 0; 
}