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
    bool endmark;
    node *next[26];
    node(){
        endmark = false;
        for(int i = 0; i < 26; i++) next[i] = NULL;
    }
} * root;

void insert(char *str){
    node *curr = root;
    for(int i = 0; str[i] != '\0'; i++){
        int id = str[i] - 'a';
        if(curr -> next[id] == NULL){
            curr -> next[id] = new node();
        }
        curr = curr -> next[id];
    }
    curr -> endmark = true;
}

bool search(char *s){
    node *present_node = root;
    for(int i = 0; s[i] != '\0'; i++){
        int id = s[i] - 'a';
        if(present_node -> next[id] == NULL) return false;
        present_node = present_node -> next[id];
    }
    return present_node -> endmark;
}

void del(node *curr){
    for(int i = 0; i < 26; i++){
        if(curr -> next[i] != NULL) del(curr -> next[i]);
    }
    delete(curr);
}

int main(){
    root = new node();
    cout << "Enter the number of words" << endl;
    int num_word;   cin >> num_word;
    for(int i = 0; i < num_word; i++){
        char s[50]; cin >> s;
        insert(s);
    }
    cout << "Enter the number of query" << endl;
    int query;  cin >> query;
    for(int i = 0; i < query; i++){
        char q[50]; cin >> q;
        if(search(q)) cout << "Found" << endl;
        else cout << "Not found" << endl;
    }
    del(root);
    return 0;
}