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

bool is_Balanced(string str){
    stack <char> s;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == '(' or str[i] == '[' or str[i] == '{') s.push(str[i]);
        else {
            if(s.empty()) return false;
            else if(str[i] == ')' and s.top() == '(') s.pop();
            else if(str[i] == ']' and s.top() == '[') s.pop();
            else if(str[i] == '}' and s.top() == '{') s.pop();
            else return false;
        }
    }
    if(s.empty()) return true;
    else return false;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    while(n--){
        string s;   cin >> s;
        if(is_Balanced(s)) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}
