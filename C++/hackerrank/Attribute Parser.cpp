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

//tag1.tag2~name

int main(){
    Fast_io;
    //string s;   getline(cin, s);
    string q;   getline(cin, q);
    string tag, valORname;
    bool a = false, b = false;
    for(int i = 0; i < q.size() - 2; i++){
        if(q[i] == '.') a = true;
        if(q[i+1] == '~'){
            a = false;
            b = true;
        } 
        if(a == true) tag += q[i+1];
        else if(b == true) valORname += q[i+2];
    }
    cout << tag << " " << valORname << endl;
    return 0;
}
