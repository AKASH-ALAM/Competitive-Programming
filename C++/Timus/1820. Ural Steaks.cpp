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
    int n, k;
    cin >> n >> k;
    int time = 0;
    if(n < k){
        cout << 2 << endl;
        return 0;
    }
    if(n % k == 0) cout << (n/k) * 2 << endl;
    else { // 7 4
        time += n/k;
        //cout << "time : " << time << endl;
        int one_side = (n/k) * k;
        //cout << "one_side : " << one_side <<endl; 
        int left = n - (n/k) * k;
        //cout << "left : " << left << endl;
        int i = k - left;
        //cout << "i : " << i << endl;
        one_side -= i;
        //cout << "one_side : " << one_side <<endl;
        time++;
        //cout << "time : " << time << endl;
        one_side += left;
        //cout << "one_side : " << one_side <<endl;
        //cout << one_side << endl;
        if(one_side > k){
            time += (one_side/k);
            one_side = one_side - ((one_side/k) * k);
            //cout << "one_side : " << one_side <<endl;
            
        }
        if(one_side) time++;
        cout << time << endl;
    }
    
    return 0;
}
