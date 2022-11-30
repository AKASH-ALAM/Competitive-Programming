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
    for(int i = 1; i <= t; i++){
        stack <string> backward, forward;
        backward.push("http://www.lightoj.com/");
        string query, url, curr_page;
        cout << "Case " << i << ":" << endl;
        while(cin >> query and query != "QUIT"){
            if(query == "VISIT") {
                cin >> url;
                if(curr_page.empty()) curr_page = url;
                backward.push(curr_page);
                curr_page = url;
            }
            else if(query == "BACK") {
                if(backward.empty()) curr_page = "ignored";
                else {
                    forward.push(curr_page);
                    backward.pop();
                    if(!backward.empty())  curr_page = backward.top();
                }
            }
            else if(query == "FORWARD") {
                if(forward.empty()) curr_page = "ignored";
                else {
                    backward.push(curr_page);
                    forward.pop();
                    if(!forward.empty())  curr_page = forward.top();  
                }
            }
            cout << curr_page << endl;
        }
        

    }
    return 0;
}
