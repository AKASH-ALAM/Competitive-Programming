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
#define MAX 10000001
using namespace std;

vector <bool> v(MAX);
void weight_string(string s){
    int pre = 0, cnt = 1, alphdel;
    for(int i = 0; i < s.size(); i++){
        alphdel = s[i] - 'a' + 1;
        if(alphdel == pre) cnt++;
        else {
            cnt = 1;
            pre = alphdel;
        }
        v[cnt*alphdel] = true;
    }
    //for(int i = 0; i < 20; i++) cout << i << " : " << v[i] << endl;
}

int main(){
    Fast_io;
    string s;   cin >> s;
    weight_string(s);
    int n, q;   cin >> n;
    for(int i = 0; i < n; i++){
        cin >> q;
        if(v[q]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
