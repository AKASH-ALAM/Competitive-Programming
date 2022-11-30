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
    //READ("input.txt");
    //WRITE("output.txt");
    string s;
    while(cin >> s){
        list <string> li;
        string word;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '['){
                if(!word.empty()){
                    li.push_back(word);
                    word = '\0';
                }
                i++;
                while(i < s.size()) {
                    if(s[i] != '[' and s[i] != ']') word += s[i++];
                    else break;
                }
                li.push_front(word);
                word = '\0';
                i--;
            }
            else if(s[i] == ']'){
                if(!word.empty()){
                    li.push_back(word);
                    word = '\0';
                }
                i++;
                while(i < s.size()){
                    if(s[i] != '[' and s[i] != ']') word += s[i++];
                    else break;
                }
                li.push_back(word);
                word = '\0';
                i--;
            }
            else word += s[i];
        }
        if(li.empty())  li.push_back(word);
        for(auto x : li) cout << x;
        cout << endl;
    }
    
    return 0;
}

