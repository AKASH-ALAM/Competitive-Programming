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

int partition(int a[], int low, int high){
    int i, j, pivot = a[high];
    for(i = low-1, j = low; j < high; j++){
        if(a[j] < pivot){
            i = i + 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}

void quick_sort(int a[], int low, int high){
    if(low >= high) return;
    int p = partition(a, low, high);
    quick_sort(a, low, p-1);
    quick_sort(a, p+1, high);
}

int main(){
    Fast_io;
    int array[] = {2, 10, 5, 5, 17, 3, 8};
    quick_sort(array, 0, 7);
    for(int i = 0; i < 6; i++) cout << array[i] << " ";
    cout << endl;
    return 0;
}
