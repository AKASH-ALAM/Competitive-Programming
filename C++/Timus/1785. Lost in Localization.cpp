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
    int n;  cin >> n;

    if(n <= 4) cout << "few" << endl;
    else if(n <= 9) cout << "several" << endl;    
    else if(n <= 19) cout << "pack" << endl;    
    else if(n <= 49) cout << "lots" << endl;    
    else if(n <= 99) cout << "horde" << endl;    
    else if(n <= 249) cout << "throng" << endl;    
    else if(n <= 499) cout << "swarm" << endl;    
    else if(n <= 999) cout << "zounds" << endl;    
    else cout << "legion" << endl;    

    return 0;
}