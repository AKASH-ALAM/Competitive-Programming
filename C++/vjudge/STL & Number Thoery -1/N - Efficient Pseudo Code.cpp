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

ll N(ll b, ll p){
    if(p == 0) return 1;
    if(p % 2 == 0){
        ll ret = N(b, p/2);
        return (ret * ret) % MOD; 
    }
    else return (b  * N(b, p-1)) % MOD;
}

ll divisor_sum(ll n){
    ll sum = 0, size = sqrt(n)+1;
    set <ll> s;
    for(ll i = 1; i <= size; i++){
        if(n % i == 0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto x : s) {
        sum = (sum + x) % MOD;
    }
    return sum;
}

int main(){
    //Fast_io;
    ll t;  cin >> t;
    for(ll i = 1; i <= t; i++){
        ll n, m;   cin >> n >> m;
        ll result = N(n, m);
        result = divisor_sum(result);
        cout << "Case " << i << ": ";
        cout << result % MOD << endl;
    }
    return 0;
}
