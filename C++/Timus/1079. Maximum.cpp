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
    int n;
    //Stern-Brocot Sequence
    while(cin >> n && n != 0){
        vector <int> v;
        v.push_back(1);
        v.push_back(1);
        n = n - 2;
        for(int i = 0; i < n; i++){
            v.push_back(v[i] + v[i+1]);
            if(i == n - 1) break;
            v.push_back(v[i+1]);
            n--;
        }
        sort(v.begin(), v.end());
        cout << *(v.end() - 1)<< endl;
    }
    return 0;
}