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
    string s, w;
    vector <string> v;
    set <string> st;
    while(getline(cin, s)){
        v.push_back(s);
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            if(isupper(v[i][j])) v[i][j] = tolower(v[i][j]);
            if(!isalpha(v[i][j])) v[i][j] = ' ';
        }
        stringstream s(v[i]);
        string word;
        while(s >> word) st.insert(word);
    }

    vector <string> d;
    for(auto x : st) d.push_back(x);

    for(int i = 0; i < d.size(); i++) {
        for(int j = 0; j < d.size()-i-1; j++){
            if(!lexicographical_compare(d[j].begin(), d[j].end(), d[j+1].begin(), d[j+1].end())){
                string tmp = d[j];
                d[j] = d[j+1];
                d[j+1] = tmp;
            }
        }
    }

    for(auto x : d) cout << x << endl;
}
