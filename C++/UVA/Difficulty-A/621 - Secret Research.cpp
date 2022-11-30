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
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        int end = s.size();
        bool check = false;
        if(s.size() <= 2 and ((s[0] == '1' || s[0] == '4') || (s[0] == '7' and s[1] == '8'))){
            cout << '+' << endl;
        }
        else if(s[end-2] == '3' and s[end-1] == '5'){
            if(s.find('1') != -1) check = true;
            if(s.find('4') != -1) check = true;
            if(s.find("78") != -1) check = true;
            if(check) cout << '-' << endl;
        }
        else if(s[0] == '9' and s[end-1] == '4'){
            if(s.find('1') != -1) check = true;
            if(s.find('4') != -1) check = true;
            if(s.find("78") != -1) check = true;
            if(check) cout << '*' << endl;
        }
        else if((s.find("190", 0, 2) != -1) and (s[end-1] == '1' || s[end-1] == '4' || (s[end-2] == '7' and s[end-1] == '8'))) {
            cout << '?' << endl;
        }
        else cout << '?' << endl;
    }
    return 0;
}
