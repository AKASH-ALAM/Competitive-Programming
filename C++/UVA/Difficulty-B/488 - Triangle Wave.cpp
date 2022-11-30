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

int main(){
    Fast_io;
    int t;  cin >> t;
    while(t--){
        int a, f;   cin >> a >> f;
        for(int k = 0; k < f; k++){
            for(int i = 1; i <= a; i++){
                for(int j = 0; j < i; j++) cout << i;
                cout << endl;
            }
            for(int i = a - 1; i > 0; i--){
                for(int j = 0; j < i; j++) cout << i;
                cout << endl;
            } 
            if(k != f-1) cout << endl;
        }
        if(t) cout << endl;
    }
    return 0;
}
