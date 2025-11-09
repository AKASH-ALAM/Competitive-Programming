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

int main(){
    Fast_io;
    int array[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 2};
    if(is_max_heap(array, 9)) cout << "This is max heap" << endl;
    else cout << "Not max heap" << endl; 
    return 0;
}
