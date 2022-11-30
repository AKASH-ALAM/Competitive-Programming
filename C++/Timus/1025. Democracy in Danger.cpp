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
    int k;  cin >> k;
    int *gruop = (int*) malloc(sizeof(int) * k);
    for(int i = 0; i < k; i++) cin >> gruop[i];
    sort(gruop, gruop+k);
    int minimul_supporter = 0;
    
    for(int i = 0; i < (k/2) + 1; i++) {
        minimul_supporter += (gruop[i]/2) + 1;
    }

    cout << minimul_supporter << endl;
    return 0;
}