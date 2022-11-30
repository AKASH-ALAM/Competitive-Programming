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

int left(int i){
    return 2 * i;
}
int right(int i){
    return 2 * i + 1;
}
int parent(int i) {
    return i / 2;
}

bool is_max_heap(int n[], int head_size){ 
    for(int i = head_size; i > 1; i--){
        int p = parent(i);
        if(n[p] < n[i]) return false;
    }
    return true;
}

void max_heapify(int h[], int size, int i){
    int l, r, largest;
    l = left(i);
    r = right(i);
    if(l <= size && h[l] > h[i]) largest = l;
    else largest = i;
    if(r <= size && h[r] > h[i]) largest = r;
    if(largest != i){
        swap(h[largest], h[i]);
        max_heapify(h, size, largest);
    }
}

void build_heap(int heap[], int size){
    for(int i = size / 2; i >= 1; i--){
        max_heapify(heap, size, i);
    }
}

void print_heap(int heap[], int size){
    for(int i = 1; i <= size; i++) cout << heap[i] << " ";
    cout << endl;
}

int max_extract(int heap[], int size){
    int max = heap[1];
    heap[1] = heap[size];
    size -= 1;
    max_heapify(heap, size, 1);
    return max;
}

int insert_node(int heap[], int size, int node){
    int i, p;
    size += 1;
    heap[size] = node;
    i = size;
    while(i > 1 && heap[i] > heap[parent(i)]){
        p = parent(i);
        swap(heap[i], heap[p]);
        i = p;
    }
    return size;
}
int main(){
    Fast_io;
    int heap_size = 9, array[heap_size+1] = {0, 19, 3, 12, 5, 7, 17, 10, 1, 2};
    print_heap(array, heap_size);

    int item = max_extract(array, heap_size);
    cout << item << endl;

    build_heap(array, heap_size);

    item = max_extract(array, heap_size);
    cout << item << endl;

    print_heap(array, heap_size);
    heap_size = insert_node(array, heap_size, 100);
    build_heap(array, heap_size);
    print_heap(array, heap_size);
    return 0;
}
