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

vector <int> a, b;
vector <int>::iterator it;
int f = b.size();
bool *flag = (bool*) malloc(sizeof(bool) * f);

int BS(int data, int k){
    auto a = lower_bound(b.begin(), b.end(), data);
    //auto a = lower_bound(b.begin(), b.end(), data+k);
    auto c = upper_bound(b.begin(), b.end(), data-k);
    if(flag[*a] == 0 and a != b.end() or flag[*c] == 0 and c != b.end()){
        flag[*a] = 1;
        return 1;
    } else return 0;
}

int main(){
    Fast_io;
    int n, m, k, in, cnt = 0;
    cin >> n >> m >> k;
    
    for(int i = 0; i < n; i++){
        cin >> in;
        a.push_back(in);
    }
    for(int i = 0; i < m; i++){
        cin >> in;
        b.push_back(in);
    }

    sort(b.begin(), b.end());
    
    for(it = a.begin(); it != a.end(); it++){
        cnt += BS(*it, k);
    }

    cout << cnt << endl;

    return 0;
}