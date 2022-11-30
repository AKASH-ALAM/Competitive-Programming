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
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

int quickSwap = 0;
int runningTime(vector <int> arr, int n) {
    int time = 0;
    for(int i = 1; i < n; i++){
        int item = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            j = j - 1;
            time++;
        }
        arr[j+1] = item;
    }
    return time;
}

void quickSort(vector <int> array, int first, int last) {
    if (first >= last)
        return;
    int pivot = array[last];
    int i = first;
    for (int j = first; j < last; j++) {
        if (array[j] <= pivot) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            quickSwap++;
        }
    }
    array[last] = array[i];
    array[i] = pivot;
    quickSwap++;
    quickSort(array, first, i-1);
    quickSort(array, i+1, last);
}

int main(){
    Fast_io;
    int n;  cin >> n;
    vector <int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    } 
    int time_one = runningTime(array, n);
    quickSort(array, 0, n-1);
    cout << time_one - quickSwap << endl;
    return 0;
}
