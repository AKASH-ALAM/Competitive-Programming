#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define endl '\n'

ll a, b, c, d, e, f;
ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n, caseno = 0, cases;
    cin >> cases;
    while( cases-- ) {
        cin >> a >> b >> c >> d >> e >> f >> n;
       cout << "Case " << ++caseno << ": " <<  (fn(n) % 10000007) << endl;
    }

    return 0;
}
