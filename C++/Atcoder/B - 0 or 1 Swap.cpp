/**
*    Author:  AKASH-ALAM
**/
#include <bits/stdc++.h>
#define endl        '\n'
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
#define debug(x) 	cerr << #x <<  ' = ' << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
using namespace std;
int main(){
    Fast_io;
    int n, m;  cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    } 
    int j = 0, k = 0;
    bool one = true, two = true, flag = false;
    for(int i = 0; i < n-1; i++) {
        if(v[i] > v[i+1] and one) {
            j = i;
            one = false;
        }
        else if(v[i] > v[i+1] and two) {
            k = i+1;
            two = false;
        }
    }

    if(one == false and two == false) swap(v[j], v[k]);

    /* for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }cout << endl; */

    for(int i = 0; i < n-1; i++){
        if(v[i] > v[i+1]) {
            flag = true;
            break;
        }
        else if((v[i+1] - v[i]) > 1){
            flag = true;
            break;
        }
    }
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}