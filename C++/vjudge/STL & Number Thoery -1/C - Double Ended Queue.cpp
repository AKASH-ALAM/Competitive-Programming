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
    //Fast_io;
    int t;  cin >> t;
    for(int i = 1; i <= t; i++){
		cout << "Case " << i << ":" << endl;
        int n, m;   cin >> n >> m;
        deque <int> dq;
        for(int j = 0; j < m; j++){
			string s;   int item;   cin >> s;
            if(s == "pushLeft"){
                cin >> item;
                if((int) dq.size() == n) cout << "The queue is full" << endl;
                else {
                    cout << "Pushed in left: " << item << endl;
                    dq.push_front(item);
                }
            }
            else if(s == "pushRight"){
                cin >> item;
                if((int) dq.size() == n) cout << "The queue is full" << endl;
                else{
                    cout << "Pushed in right: " << item << endl;
                    dq.push_back(item);
                } 
            }
            else if(s == "popLeft"){
                if(dq.empty()) cout << "The queue is empty" << endl;
                else {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
            }
            else if(s == "popRight"){
                if(dq.empty()) cout << "The queue is empty" << endl;
                else {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}