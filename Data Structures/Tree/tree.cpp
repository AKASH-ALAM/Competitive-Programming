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
typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int value){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL) {
        cout << "Error! could not create a new node" << endl;
        exit(1);
    }
    new_node -> data = value;
    new_node -> left = NULL;
    new_node -> right = NULL;
    return new_node; 
}

void left_child(Node *node, Node *child){
    node -> left = child;
}

void right_child(Node *node, Node *child){
    node -> right = child;
}

Node *create_tree(){
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    left_child(two, seven);
    right_child(two, nine);
    Node *one = create_node(1);
    Node *six = create_node(6);
    left_child(seven, one);
    right_child(seven, six);
    Node *eight = create_node(8);
    right_child(nine, eight);
    Node *five = create_node(5);
    Node *ten = create_node(10);
    left_child(six, five);
    right_child(six, ten);
    Node *three = create_node(3);
    Node *four = create_node(4);
    left_child(eight, three);
    right_child(eight, four);
    return two;
}

void pre_order(Node *node){
    cout << node -> data << " ";
    if(node -> left !=  NULL) pre_order(node -> left);
    if(node -> right != NULL) pre_order(node -> right);
}
void post_order(Node *node){
    if(node -> left !=  NULL) post_order(node -> left);
    if(node -> right != NULL) post_order(node -> right);
    cout << node -> data << " ";
}
void in_order(Node *node){
    if(node -> left !=  NULL) in_order(node -> left);
    cout << node -> data << " ";
    if(node -> right != NULL) in_order(node -> right);
}

int main(){
    Fast_io;
    Node *root = create_tree();
    cout << "Pre-order : ";
    pre_order(root);
    cout << endl;
    
    cout << "Post-order : ";
    post_order(root);
    cout << endl;

    cout << "In-order : ";
    in_order(root);
    cout << endl;

    return 0;
}