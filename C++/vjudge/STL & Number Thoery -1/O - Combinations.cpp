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

int m = 1000003;

int main(){
    Fast_io;
    int t;  cin >> t;
    for(int l = 1; l <= t; l++){
        ll n, r, tmp;    cin >> n >> r;
        (n - r > r ? tmp = n-r : tmp = r);
        vector <int> a, b, c;
        for(int i = 1; i <= n; i++) a.push_back(i);
        for(int i = 1; i <= tmp; i++) b.push_back(i);

        for(auto it = a.begin(), it2 = b.begin(); it2 != b.end(); it++, it2++){
            if((*it % *it2) == 0) {
                a.erase(it);
                b.erase(it2);
                it--, it2--;
            }
        }
        (n - r > r ? tmp = r : tmp = n - r);
        for(int i = 1; i <= tmp; i++) b.push_back(i);
        int size;
        (a.size() < b.size() ? size = a.size() : size = b.size());
        
        for(int i = 0; i < size; i++){
            int cut = gcd(a[i], b[i]);
            if(a[i] % cut == 0) a[i] = a[i] / cut;
            if(b[i] % cut == 0) b[i] = b[i] / cut;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        n = 1;
        for(auto x : a) {
            n = (n * x) % m;
        }
        r = 1;
        for(auto x : b) {
            r = (r * x) % m;
        }
        cout << "Case " << l << ": ";
        cout << (n / r) % m << endl;
    }
    return 0;
}
