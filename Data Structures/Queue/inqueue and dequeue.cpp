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

#define Q_size 5
typedef struct {
    int data[Q_size+1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int value){
    if((q->tail + 1) % (Q_size + 1) == q->head){
        cout << "Queue is full" << endl;
        return;
    } 
    q -> data[q->tail] = value;
    q->tail = (q->tail+1) % Q_size + 1;
}

int dequeue(Queue *q){
    int item;
    if(q->head == q->tail) {
        cout << "Queue is empty!" << endl;
        exit(0);
    }
    item = q->data[q->head];
    q->head = (q->head + 1) % Q_size + 1;
    return item;
}

int main(){
    Fast_io;
    Queue my_q;
    my_q.head = my_q.tail = 0;
    enqueue(&my_q, 1);
    enqueue(&my_q, 2);
    enqueue(&my_q, 3);
    enqueue(&my_q, 4);
    enqueue(&my_q, 5);

    enqueue(&my_q, 6);
    
    while(my_q.head != my_q.tail){
        int item = dequeue(&my_q);
        cout << item << endl;
    }
    int item = dequeue(&my_q);
    cout << item << endl;
    return 0;
}
