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

string caesarCipher(string s, int k){
    for(int i = 0; i < s.size(); i++){
        if(!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z')) continue;
        else if(((s[i] + k) <= 122) && (s[i] >= 'a' && s[i] <= 'z')) s[i] += k;
        else if(((s[i] + k) <= 90) && (s[i] >= 'A' && s[i] <= 'Z')) s[i] += k;
        else {
            int ch;
            if(s[i] >= 'a' && s[i] <= 'z'){
                ch = (s[i] + k) - 123;
                if(ch >= 26) ch = ch % 26;
                s[i] = 'a' + ch;
            } 
            else{
                ch = (s[i] + k) - 91;
                if(ch >= 26) ch = ch % 26;
                s[i] = 'A' + ch;
            } 
        }
    }
    return s;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    string s;   cin >> s;
    int k;  cin >> k;
    s = caesarCipher(s, k);
    cout << s << endl;
    return 0;
}
