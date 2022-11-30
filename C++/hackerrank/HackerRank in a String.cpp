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

string removeExtra(string s){
    for(int i = 0; i < s.size(); i++){
        //hackerrank
        if(s[i] == 'h' || s[i] == 'a' || s[i] == 'c' || s[i] == 'k' || s[i] == 'e' || s[i] == 'r' || s[i] == 'n') continue;
        else s.erase(i, 1);
    }
    return s;
}

string hackerrankInString(string s) {
    s = removeExtra(s);
    string yes = "YES", no = "NO";
    if(s.size() < 10) return no;
    int h = 0, a = 0, c = 0, k = 0, e = 0, r = 0, R = 0, A = 0, n = 0, K = 0;
    for(int i = 0; i < s.size(); i++){
                 if(s[i] == 'h' && !h)      h = i+1;
            else if(s[i] == 'a' && h && !a) a = i+1; //if (h != 0 and a == 0)
            else if(s[i] == 'c' && a && !c) c = i+1;
            else if(s[i] == 'k' && c && !k) k = i+1;
            else if(s[i] == 'e' && k && !e) e = i+1;
            else if(s[i] == 'r' && e && !r) r = i+1;
            else if(s[i] == 'r' && r && !R) R = i+1;
            else if(s[i] == 'a' && R && !A) A = i+1;
            else if(s[i] == 'n' && A && !n) n = i+1;
            else if(s[i] == 'k' && n && !K) K = i+1;
    }
    //cout << s << endl;
    //cout << h << " " << a << " " << c << " " << k << " " << e << " " << r << " " << R << " " << A << " " << n << " " << K << endl;
    if(h == 0 || a == 0 || c == 0 || k == 0 || e == 0 || r == 0 || R == 0 || A == 0 || n == 0 || K == 0) return no;
    if(h < a && a < c && c < k && k < e && e < r && r < R && R < A && A < n && n < K) return yes;
    else return no;
}

int main(){
    //freopen("hackerrankInString.txt", "r", stdin);
    Fast_io;
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        s = hackerrankInString(s);
        cout << s << endl;
    }
    return 0;
}
