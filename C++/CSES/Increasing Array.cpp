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
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

int main(){
    Fast_io;
    int n, dif, ans = 0;
    cin >> n;
    int *arry = (int *) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) cin >> arry[i];
    for(int i = 0; i < n-1; i++){
        if(arry[i] > arry[i+1]){
            dif = (arry[i] - arry[i+1]) + 1;
            arry[i+1] += dif;
            ans = max(ans, dif); 
            dif = 0;
        }
        //cout << arry[i] << " ";
    }//cout << endl;
    cout << ans << endl;
    return 0;
}