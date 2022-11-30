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

int main(){
    Fast_io;
    int n, m;   cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b, b+m);
    int lcmOfa, gcdOfb;
    for(int i = 1; i < n; i++){
        int result = a[0];
        lcmOfa = lcm(result, a[i]);
    }
    bool check = true;
    for(int i = 1; i <= b[0]; i++){
        for(int j = 0; j < m; j++){
            if(b[j] % i == 0 && check) {
                check = true;
            } else {
                check = false;
                j = m;
            }
        }
        if(check) {
            gcdOfb = i;
        } else check = true;
    }
    if(n == 1) lcmOfa = a[0];
    if(m == 1) gcdOfb = b[0];
    cout<< lcmOfa << " " << gcdOfb << endl;
    int cnt = 0;
    for(int i = lcmOfa; i <= gcdOfb; i++){
        if(gcdOfb % i == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
