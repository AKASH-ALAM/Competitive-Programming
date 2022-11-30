/**
*    Author:  AKASH-ALAM
**/
#include <bits/stdc++.h>
#define endl        '\n'
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
#define debug(x) 	cerr << #x <<  ' = ' << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
using namespace std;
int main(){
    Fast_io;
    int n, a, b;
    cin >> n >> a >> b;
    int A = 0, B = 0;
    vector <char> v;

    for(int i = 0; i < n; i++){
        if(a > A){
            v.push_back('b');
            A++;
            if(A == a) B = 0;
        }
        else if(b > B) {
            v.push_back('r');
            B++;
            if(B == b) A = 0;
        }
    }
    int cnt = 0;
    for(auto i : v) {
        if(i == 'b') cnt++;
    }
    cout<< cnt << endl;;
    return 0;
}