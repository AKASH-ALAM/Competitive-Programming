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

string s; // aab
int cnt = 0;

void permutation(int i, string per){
    if(i == s.size()){
        cout << "\t" << per << endl; cnt++;
        return;
    }
    for(int j = 0; j <= per.size(); j++){
        string str = per;
        str.insert(j, 1, s[i]);
        permutation(i+1, str);
        if(str[j+1] == s[i]) break;
    }
}

int main(){
    Fast_io;
    cin >> s;
    cout << "Output : " << endl;
    permutation(0, "");
    cout << "\nNumber of Permutation : " << cnt << endl;
    return 0;
} 
