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

int main(){
    Fast_io;
    vector <string> s;
    string ss;
    while(getline(cin, ss)){
        s.push_back(ss);
    }
    int big_len = 0, len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i].size() > big_len) big_len = s[i].size();
    }
    for(int i = 0; i < big_len; i++){
        int sz = s[i].size();
        for(int j = len-1; j >= 0; j--){
            if(i > s[j].size()-1) cout << " ";
            else cout << s[j][i];
        }
        cout << endl;
    }
    return 0;
}
