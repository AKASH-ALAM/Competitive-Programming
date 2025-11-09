#include <bits/stdc++.h>
using namespace std;

vector <int> a(100, -1);

int f(int n){
    if(n <= 1) return a[n] = n;
    if(a[n-1] == -1) a[n-1] = f(n-1);
    if(a[n-2] == -1) a[n-2] = f(n-2);
    return a[n] = a[n-1] + a[n-2];
}
int main(){
    cout << f(10) << endl;
    for(int i = 1; i <= 10; i++) cout << a[i] << " \n"[i == 10];
    return 0;
}