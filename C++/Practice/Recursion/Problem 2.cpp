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

/* Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]

Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7
 */

void print(int *array, int l, int r){
    if(l > r) return;
    cout << array[l] << " " << array[r] << endl;
    print(array, l+1, r-1);
}

int main(){
    Fast_io;
    int n;  cin >> n;
    int array[n];   
    for(int i = 0; i < n; i++) cin >> array[i];
    print(array, 0, n-1);
    return 0;
}
