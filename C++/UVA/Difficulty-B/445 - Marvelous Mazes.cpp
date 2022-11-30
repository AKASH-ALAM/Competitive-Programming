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

int main(){
    Fast_io;
    string s;
    while(getline(cin, s)){
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])) {
                cnt += (int) s[i] - '0';
            }
            else if(s[i] == '!') cout << endl;
            else if(s[i] == 'b') {
                for(int j = 0; j < cnt; j++) cout << " ";
                cnt = 0;
            }
            else {
                for(int j = 0; j < cnt; j++) cout << s[i];
                cnt = 0;
            }
        } cout << endl;
    }
    return 0;
}
