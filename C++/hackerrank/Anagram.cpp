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

int anagram(string s) {
    if(s.size() % 2 != 0) return -1;
    string first, second;
    for(int i = 0; i < s.size()/2; i++){
        first += s[i];
    }
    for(int i = (s.size()/2); i < s.size(); i++){
        second += s[i];
    }
    //cout << first << " " << second << endl;
    int cnt = 0;
    for(int i = 0; i < second.size(); i++){
        size_t it = first.find(second[i]);
        if(it == string::npos) cnt++;
        else first.erase(it, 1);
    }
    return cnt;
}

int main(){
    Fast_io;
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
