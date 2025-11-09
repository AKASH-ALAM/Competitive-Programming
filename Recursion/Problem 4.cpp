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

/* Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1

Input:
5
Output:
1 + x + x^2 + x^3 + x^4
 */

void poly_s(int i, int n){
    if(i == n) return;
    if(i == 0) cout << 1;
    else {
        if(i < n) cout << " + ";
        if(i < 2) cout << "x";
        else cout << "x^" << i;
    }
    poly_s(i+1, n);
}


int main(){
    Fast_io;
    int n;  cin >> n;
    poly_s(0, n);
    return 0;
}
