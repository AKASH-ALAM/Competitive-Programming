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
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;

int main(){
    Fast_io;
    int k, n, sum = 0;
    cin >> k >> n;
    int *array = (int*) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) cin >> array[i];
    for(int i = 0; i < n-1; i++){
        if(array[i] > k){
            array[i] = array[i] - k;
            array[i+1] += array[i];
        }
    }
    /* for(int i = 0; i < n; i++) cout << array[i] << " ";
    cout << endl; */
    if(array[n-1] > k) cout << array[n-1] - k << endl;
    else cout << 0 << endl;
    return 0;
}

