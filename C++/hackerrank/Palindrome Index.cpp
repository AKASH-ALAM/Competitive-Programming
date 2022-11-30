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
#define READ(filename)  freopen("input.txt", "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    string s2 = s;
    int i, j, len = s.size();
    reverse(s2.begin(), s2.end());
    if(s2 == s) return -1;

    for(i = 0, j = len-1; i < len and j >= i; i++, j--){
        if(s[i] != s[j]) break;
    }
    string s3, s4 = s;

    s.erase(i, 1);
    s3 = s;
    reverse(s3.begin(), s3.end());

    s4.erase(j, 1);
    string s5 = s4;
    reverse(s5.begin(), s5.end());

    if(s == s3) return i;
    else if(s5 == s4) return j;
    else return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    READ("input.txt");
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}

