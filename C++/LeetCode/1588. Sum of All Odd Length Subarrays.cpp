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
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    vector <int> odd;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 != 0) odd.push_back(arr[i]);
    }
    cout << "odd numbers are : ";
    for(auto x : odd) cout << x << " ";
    cout << endl;
    int sum = 0;
    for(int l = 0; l < odd.size(); l++){
        for(int i = 0; i < arr.size(); i++){
            for(int j = i; j < odd[l]; j++){
                sum += arr[j];
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return sum;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int tmp;    cin >> tmp;
        v.push_back(tmp);
    }
    int sum = sumOddLengthSubarrays(v);
    cout << "output is : " << sum << endl;
    return 0;
}
