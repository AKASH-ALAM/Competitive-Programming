/**
 *    author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define pi          acos(-1.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;

int main(){
    Fast_io;

    db n, r, tmp_n;   cin >> n >> r;
    tmp_n = n;
    db r_nails = 2*pi*r;
    db a, b;
    vector < pair<db, db> > p;
    vector < pair<db, db> >::iterator it, it2;

    while(n--){
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    db rope_lenght = 0.0;
    
    for(it = p.begin(), it2 = p.begin()+1; it2 != p.end(); it++, it2++){
        db tmp = pow((it->first - it2->first), 2) + pow((it->second - it2->second), 2);
        rope_lenght += sqrt(tmp);
    }

    it = p.begin();
    it2 = p.end() - 1;

    rope_lenght +=  sqrt(pow((it2->first - it->first), 2) + pow((it2->second - it->second), 2));
    cout << fixed << setprecision(2) << rope_lenght+r_nails << endl;
    return 0;
}