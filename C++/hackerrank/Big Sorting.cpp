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

bool myfunc(string i, string j){
    int n = i.length(), m = j.length();
    if(n == m) return i < j;
    else return n < m;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    vector <string> str(n);
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str.begin(), str.end(), myfunc);
    for(int i = 0; i < n; i++) cout << str[i] << endl;
    return 0;
}
