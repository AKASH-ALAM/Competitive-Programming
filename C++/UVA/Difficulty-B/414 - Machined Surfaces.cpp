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
#define Fast_io    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

int main(){
    Fast_io;
    int t;
    while(cin >> t and t != 0){
        cin.ignore();
        string s[t];
        vector <int> space;
        int cnt = 0;
        for(int i = 0; i < t; i++) getline(cin, s[i]);
        for(int i = 0; i < t; i++) {
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j] == ' ') cnt++;
            }
            space.push_back(cnt);
            cnt = 0;
        }
        sort(space.begin(), space.end());
        cnt = 0;
        auto f = space.begin();
        for(auto it = space.begin()+1; it != space.end(); it++){
            cnt += *it - *f;
        }
        cout << cnt << endl;
    }
    return 0;
}
