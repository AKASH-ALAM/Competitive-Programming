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
    double n, positive = 0, neg = 0, zero = 0;
    cin >> n;

    double *array = (double*) malloc(sizeof(double) * n);
    for(int i = 0; i < n; i++) cin >> array[i];

    for(int i = 0; i < n; i++) {
        if(array[i] > 0) positive++;
        else if(array[i] < 0) neg++;
        else zero++;
    }

    cout << fixed << setprecision(6) << positive/n << endl << neg/n << endl << zero/n << endl;
    return 0;
}