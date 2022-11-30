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

void separateNumbers(string s){
    int len = s.size();
    vector <int> v;
    for(int i = 0; i < len; i++)    v.push_back(s[i] - '0');
    ll frist = 0, second = 0, prefix = 0;
    bool check = true;
    int i = 0, j = 1;
    frist = v[i], second = v[j];
    if(frist == 0) {
        cout << "NO" << endl;
        return;
    }
    while(j < len){
        if(second - frist == 1) {
            if(check == true) {
                prefix = frist;
                check = false;
            }
            if(j + 1 == len) break; 
            frist = second;
            second = v[++j];
        }
        else if(second - frist < 1){
            if(j+1 == len) break;
            second = (second * 10) + v[++j];
        }
        else if(second - frist > 1){
            if(check == false) frist = v[0], check = true, prefix = 0;
            frist = (frist * 10) + v[++i];
            if(j+1 == len) break;
            second = v[i+1];
            j = i+1;
        }
    }
    //cout << second << " " << frist << endl;
    if(second - frist == 1) cout << "YES " << (prefix == 0 ? frist : prefix) << endl;
    else cout << "NO" << endl;

}
int main(){
    Fast_io;
    int q;  cin >> q; 
    while(q--){
        string s;   cin >> s;
        separateNumbers(s);
    }
    return 0;
}
