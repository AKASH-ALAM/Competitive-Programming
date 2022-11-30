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
    int n;  cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    string unMatch;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < s[0].size(); j++){
            size_t it = s[i].find(s[0][j]);
            if(it == string::npos){
                unMatch += s[0][j]; // you can erase here but don't give you AC
            } 
        }
    }
    for(int i = 0; i < unMatch.length(); i++){
        for(int j = 0; j < s[0].size(); j++){
            if(unMatch[i] == s[0][j]) s[0].erase(j, 1);
        }
    }
    for(int i = 0; i < s[0].size(); i++){
        for(int j = i + 1; j < s[0].size(); j++){
            if(s[0][i] == s[0][j]) s[0].erase(j, 1);
        }
    }
    cout << endl;
    cout << s[0] << endl;
    cout << s[0].size() << endl;
    return 0;
}
