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

int cyldnr_sum(int a[],int j, int size){
    int sum = 0;
    for(int i = j; i < size; i++) sum += a[i];
    return sum;
}

int main(){
    Fast_io;
    int a, b, c;    cin >> a >> b >> c;
    int one[a], two[b], three[c];
    for(int i = 0; i < a; i++) cin >> one[i];
    for(int i = 0; i < b; i++) cin >> two[i];
    for(int i = 0; i < c; i++) cin >> three[i];
    int cy_sum[3], sm;
    int a_top = 0, b_top = 0, c_top = 0;
    while(1){
        cy_sum[0] = cyldnr_sum(one,a_top, a);
        sm = cy_sum[0];
        cy_sum[1] = cyldnr_sum(two, b_top, b);
        if(cy_sum[1] < sm) sm = cy_sum[1];
        cy_sum[2] = cyldnr_sum(three,c_top, c);
        if(cy_sum[2] < sm) sm = cy_sum[2];
        //cout << sm << endl;
        if(cy_sum[0] > sm) one[a_top++] = 0; 
        if(cy_sum[1] > sm) two[b_top++] = 0;
        if(cy_sum[2] > sm) three[c_top++] = 0;
        sort(cy_sum, cy_sum+3);
        if(cy_sum[0] == cy_sum[2]) break;
    }
    cout << cy_sum[0] << endl;
    return 0;
}
