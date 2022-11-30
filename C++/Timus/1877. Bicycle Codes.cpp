/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;

int main(){
    Fast_io;
    int a, b;
    cin >> a >> b;
    if(a % 2 == 0 || b % 2 != 0) cout << "yes" << endl;
    else cout << "no" << endl;
    //this code is not mine. why it is work i don't know. 
    return 0;
}