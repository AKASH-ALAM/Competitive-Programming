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
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

struct node {
    int data;
    struct node* link;
};

struct node* head;

void print() {
    struct node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}

void insert_sort(int value){ 
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp -> data = value;
    temp -> link = head;
    if(head == NULL || temp -> data < head -> data){
        struct node* temp2 = head;
        head = temp;
        head -> link = temp2;
    }
    else {
        struct node *after, *before;
        after = head;
        before = head -> link;
        while(before != NULL && temp -> data > before -> data){
            after = before;
            before = before -> link;
        }
        after -> link = temp;
        temp -> link = before;
    }
}

int main(){
    Fast_io;
    head = NULL;
    insert_sort(10);
    insert_sort(1);
    insert_sort(5);
    insert_sort(11);
    insert_sort(8);
    print(); 
    
    return 0;
}