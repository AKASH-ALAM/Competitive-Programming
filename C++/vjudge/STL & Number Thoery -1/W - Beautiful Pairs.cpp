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

int main(){
    Fast_io;
    int n;  cin >> n;
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    for(int i = 0; i < n; i++) cin >> b[i]; 
    int cnt = 0;
    for(auto it = a.begin(); it != a.end(); it++){
        auto it2 = find(b.begin(), b.end(), *it);
        if(it2 != b.end()){
            a.erase(it);
            b.erase(it2);
            it--, it2--;
            cnt++;
        }
    }
    if(cnt == n) cnt--;
    if(b.size() >= 1) cnt++;
    cout << cnt << endl;
    return 0;
}
