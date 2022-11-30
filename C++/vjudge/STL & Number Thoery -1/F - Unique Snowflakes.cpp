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
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector <int> s;
        for(int i = 0; i < n; i++){
            int a;  cin >> a;
            s.push_back(a);
        }
        int cnt = 0, big = 0;
        for(auto it = s.begin(); it != s.end(); it++){
            auto check = find(it+1, s.end(), *it);
            if(check != s.end()) cnt++;
            else {
                if(cnt > big) {
                    big = cnt;
                    cnt = 0;
                }
            }
        }
        if(cnt > big) big = cnt;
        cout << big << endl;
    }
    return 0;
}
/* 
12
    5
1
2
3
2
1
    1
0
    12
7
4
0
9
4
8
8
2
4
5
5
1
    2
1
1
    5
134
134
135
136
136
    7
132
132
123
132
123
144
566
    0
    1
333
    7
22
22
22
23
22
23
23
    5
132
132
132
132
132
    6
1 
2 
3 
2 
4 
5
    11
1 
2
3 
5 
11 
12 
444 
2 
6 
7 
15 */