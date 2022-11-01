/**
*    Author:  AKASH-ALAM
**/
#include <bits/stdc++.h>
#define endl        '\n'
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
#define debug(x) 	cerr << #x <<  ' = ' << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
using namespace std;

void merge(int *arry, int *l, int ls, int *r, int rs){
    int i = 0, j = 0, k = 0;

    while(i < ls and j < rs){
        if(l[i] < r[j]) {
            arry[k++] = l[i++];
        }
        else arry[k++] = r[j++];
    }
    while(i < ls) arry[k++] = l[i++]; // if left subarry is not finished
    while(j < rs) arry[k++] = r[j++]; // finished the right subarry
}

void mergeSort(int *arry,int size){
    if(size < 2) return;
    int mid = size / 2;
    int *left, *right;
    left = (int*) malloc(sizeof(int) * mid);
    right = (int*) malloc(sizeof(int) * size-mid);

    //deviding the arry
    for(int i = 0; i < mid; i++) left[i] = arry[i]; //creating left subarry
    for(int i = mid; i < size; i++) right[i-mid] = arry[i]; //creating right subarry
    //output the devided arry
    /* for(int i = 0; i < mid; i++) cout << left[i] << " ";
    cout << endl;
    for(int i = 0; i < size-mid; i++) cout << right[i] << " ";
    cout << endl; */
    mergeSort(left, mid); // sorting the left subarry
    mergeSort(right, size-mid); // sorting the right subarry
    merge(arry, left, mid, right, size-mid); // merge left and rignt into arry as sortd list;
    free(left);
    free(right);

}

int main(){
    Fast_io;
    int arry[] = {2,1,9,3,7,4,10,4,5,8,6};
    int size = sizeof(arry) / sizeof(arry[0]);
    cout << "After : "; 
    for(int i = 0; i < size; i++) cout << arry[i] << " ";
    cout << endl;

    mergeSort(arry, size);

    cout << "Befor : ";
    for(int i = 0; i < size; i++) cout << arry[i] << " ";
    cout << endl;
    return 0;
}