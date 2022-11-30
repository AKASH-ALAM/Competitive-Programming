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

bool is_pal(char *s, int l, int r){ // we have to use pointer otherwise it's won't work;
    return ((l >= r) || (s[l] == s[r] && is_pal(s, l+1, r-1)));
}

int main(){
    Fast_io;
    char s[100];    scanf("%s", s);
    int left = 0, right = strlen(s)-1;
    if(is_pal(s, left, right)) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}