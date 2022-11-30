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
/* Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31

Input:
2 5
Output:
31
 */
int sum = 0;
int evaluate_poly(int i, int x, int n){
    if(i == n) return 0;
    return (int) pow(x, i) + evaluate_poly(i+1, x, n);
}

int main(){
    Fast_io;
    int x, n;   cin >> x >> n;
    cout << evaluate_poly(0, x, n) << endl;
    return 0;
}
