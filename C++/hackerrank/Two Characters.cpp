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

string eraseMultiple(string s){
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i+1]){
            char same = s[i];
            s.erase(i, 2);
            for(int j = 0; j < s.size(); j++){
                if(s[j] == same) s.erase(j, 1);
            }
        }
    }
    return s;
}

int charList[26];
string countAndErase(string s){
    for(int i = 0; i < s.size(); i++){
        int chrINDX =(int) s[i] - 97;
        charList[chrINDX]++;
    }
    int n = s.size();
    while(n--){
        int cnt = 0; int smlV, indx;
        for(int i = 0; i < 26; i++) if(charList[i] != 0) cnt++;
        if(cnt > 2){
            smlV = charList[0];
            indx = 0; 
            for(int i = 1; i < 26; i++){
                if(smlV >= charList[i] && charList[i] != 0) {
                    smlV = charList[i];
                    indx = i;
                }
            } 
            charList[indx] = 0;
            char ch = 'a' + indx;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == ch) s.erase(i, 1);
            }
        }
        else break;
    }
    return s;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    string s;   cin >> s;
    s = eraseMultiple(s);
    s = countAndErase(s);
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}
