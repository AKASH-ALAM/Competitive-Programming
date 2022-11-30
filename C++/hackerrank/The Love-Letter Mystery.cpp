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
#define Fast_io    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;
int theLoveLetterMystery(string s){
    string ss = s;
    reverse(ss.begin(), ss.end());
    int cnt = 0;
    if(s == ss) cnt = 0;
    else {
        for(int i = 0, j = s.size() - 1; j >= i; i++, j--){
            if(s[i] != s[j]) cnt += abs(s[j] - s[i]);
        }
    }
    return cnt;
}
int main(){
    Fast_io;
    int n;  cin >> n;
    string s;
    while(n--){
        cin >> s;
        int check = theLoveLetterMystery(s);
        cout << check << endl;
    }
    return 0;
}
