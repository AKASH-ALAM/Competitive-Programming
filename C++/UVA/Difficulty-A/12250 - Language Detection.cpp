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
    string s;
    int i = 1;
    while(cin >> s){
        if(s[0] == '#') break;
        cout << "Case " << i << ": ";
        if(s == "HELLO") cout << "ENGLISH" << endl;
        else if(s == "HOLA") cout << "SPANISH" << endl;
        else if(s == "HALLO") cout << "GERMAN" << endl;
        else if(s == "BONJOUR") cout << "FRENCH" << endl;
        else if(s == "CIAO") cout << "ITALIAN" << endl;
        else if(s == "ZDRAVSTVUJTE") cout << "RUSSIAN" << endl;
        else cout << "UNKNOWN" << endl;
        i++;
    }
    return 0;
}
