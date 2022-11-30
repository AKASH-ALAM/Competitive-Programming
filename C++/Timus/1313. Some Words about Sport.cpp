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
    int array[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> array[i][j];
    }
    int r = 0, c = 0;
    for(int i = 0; i < n; i++){
        r = i, c = 0;
        while(r >= 0){
            cout << array[r][c] << " ";
            r--, c++;
        }
        
    }
    
    for(int i = 1; i < n; i++){
        r = n - 1, c = i;
        while(c <= n-1){
            cout << array[r][c] << " ";
            r--, c++;
        }
    } cout << endl;
    
    return 0;
}