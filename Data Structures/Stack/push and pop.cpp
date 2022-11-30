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
#define Max_size 10

using namespace std;
    
typedef struct{
    int data[Max_size];
    int top;
}Stack;

void push(Stack *s, int item){
    if(s->top < Max_size){
        s->data[s->top] = item;
        s->top++;
    }
    else cout << "Stack is full" << endl;
}
int pop(Stack *s){
    if(s->top){
        s->top--;
        return s->data[s->top];
    } else {
        cout << "Stack is empty!" << endl;
        return 0;
    }
}
int main(){
    Fast_io;
    Stack my_stack;
    my_stack.top = 0;
    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    while(my_stack.top){
        int item = pop(&my_stack);
        cout << item << endl;
    }
    pop(&my_stack); // if we pop stack again. it's give messaeg Stack is empty.
    return 0;
}
