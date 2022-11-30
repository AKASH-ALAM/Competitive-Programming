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

bool is_balanced(string input){
    if(input[0] == ')' || input[0] == '}' || input[0] == ']') return false;
    if(input[0] != '(' && input[0] != '{' && input[0] != '['){
        cout << "Invalid input!" << endl;
        exit(0);
    } 
    string prnths, crly, sqr;
    int p = 0, c = 0, q = 0;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '(') prnths[p++] = input[i];
        else if(input[i] == '{') crly[c++] = input[i];
        else if(input[i] == '[') sqr[q++] = input[i];
        else {
            if(input[i] == ')') p--;
            else if(input[i] == '}') c--;
            else if(input[i] == ']') q--;
        }
    }
    if(p == 0 && c == 0 && q == 0) return true;
    else return false;
}

int main(){
    Fast_io;
    string s;   cin >> s;
    if(is_balanced(s)) cout << "Balanced" << endl;
    else cout << "Not balanced" << endl;
    return 0;
}
