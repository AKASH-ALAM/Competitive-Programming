/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

ll BigProblem(ll n){ 
   ll Sum = 0; 
    if(n % 2 == 1){
        Sum += ((n/2)+1) * (2 + (n*2)) / 2;
        Sum += (n/2) * (2 + (n-1)) / 2;
    }   
    else{
        Sum += (n/2) * (2 + (n-1)*2) / 2;
        Sum += (n/2) * (2 + n) / 2;
    }  
    
    return Sum;
}

int main(){
    Fast_io;
    int t;  cin >> t;
    while(t--){
        ll n;  cin >> n;
        cout << BigProblem(n) << endl;
    }
    return 0;
}
