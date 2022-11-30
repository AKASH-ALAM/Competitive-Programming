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

struct node{
    int pcnt;
    bool endmark;
    node *next[26];
    node(){
        endmark = false;
        pcnt = 0;
        for(int i = 0; i < 26; i++) next[i] = NULL;
    }
} * root;

void insert(char *s){
    node *curr = root;
    for(int i = 0; s[i] != '\0'; i++){
        int id = s[i] - 'a';
        if(curr -> next[id] ==  NULL){
            curr -> next[id] = new node();
        }
        curr -> next[id] -> pcnt += 1;
        curr = curr -> next[id];
    }
}

int search(char *s){
    node *curr = root;
    for(int i = 0; s[i] != '\0'; i++){
        int id = s[i] - 'a';
        if(curr -> next[id] == NULL or curr->next[id]->pcnt == 0) {
            return 0;
        }
        curr = curr -> next[id];
    }
    return curr -> pcnt;
}

int main(){
    Fast_io;
    root = new node();
    int t;  cin >> t;
    while(t--){
        string s;       cin >> s;
        char str[22];   cin >> str;
        if(s == "add")  insert(str);
        else cout << search(str) << endl; 
    }
    return 0;
}
