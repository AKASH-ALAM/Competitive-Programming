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
/* Write a recursive program to remove all odd integers from an array. You must not use any extra array or print anything in the function. Just read input, call the recursive function, then print the array in main().

Input:
6
1 54 88 6 55 7
Output:
54 88 6 */

void remove_odd(int i, int j, int *n, int *array){
    if(i == *n){
        *n = j; 
        return;
    } 
    if(array[i] % 2 == 0) array[j++] = array[i];
    remove_odd(i+1, j, n, array); 
}

int main(){
    Fast_io;
    int n;  cin >> n;
    int array[n];   
    for(int i = 0; i < n; i++) cin >> array[i];
    remove_odd(0, 0, &n, array);
    for(int i = 0; i < n; i++) cout << array[i] << " ";
    cout << endl;
    return 0;
}
