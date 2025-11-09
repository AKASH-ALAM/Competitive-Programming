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

struct node* head = NULL;

void print() {
    struct node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}

void insurt_back(int value){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> link = NULL;
    if(head == NULL) head = temp;
    else {
        struct node* tmp = head;
        while(tmp -> link != NULL){
            tmp = tmp -> link;
        }
        tmp -> link = temp;
    }
}

void insurt_front(int value){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> link = head;
    head = temp;
}

void deleteNode(int position){
    if(position == 1){
        struct node* temp = head;
        head = head -> link;
        free(temp);
    }
    else {
        struct node* temp = head;
        for(int i = 1; i <= position - 2; i++){
            temp = temp -> link;
        }
        struct node* temp2 = temp -> link;
        temp -> link = temp2 -> link;
        free(temp2);
    }
    
}


int main(){
    Fast_io;
    
    insurt_back(1);
    insurt_back(2);
    insurt_back(3);
    insurt_back(4);
   
    print(); //1 2 3 4
    deleteNode(3);
    cout << "deleted node : 3" << endl;
    print(); //1 2 4
    deleteNode(1);
    cout << "deleted node : 1" << endl;
    print(); //2 4
    
    return 0;
}