/**
 *    Author:  AKASH-ALAM       
**/
/* #include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

string myfunc(string s){
    string s2; int cnt = 0;
    for(int i = 0; i < s.size() - 1; i++){ 
        if(s[i] == s[i+1]){
            s[i] = '0', s[i+1] = '0';
            for(int j = i+2, r = i; j < s.size(); j++){
                s[r++] = s[j];
                s[j] = '0';
            }
            s[s.size() - 2] = '\0';
            i--, cnt += 2;
        }
    }
    for(int i = 0; i < s.size() - cnt; i++){
        if(s[i] != '0'){
            s2 += s[i];
        }
    }
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == s2[i+1]){
            s2 = myfunc(s2);
        }
    }
    return s2;
}

int main(){
    Fast_io;
    string s, s2;   cin >> s;
    s2 = myfunc(s);
    if(s2.empty()) cout << "Empty String" << endl;
    else cout << s2 << endl;
    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;   cin >> s;
    for(int i = 0; i < (( (int) s.length()) - 1); i++) {
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i = -1;
        }
    }
    cout << (s.length() ? s:"Empty String");
    return 0;
}