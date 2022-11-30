/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;

int myfunc(int a, int b){
    return (a > b);
} 

int main(){
    Fast_io;
    int n, size, i, j = 0, count = 1;  cin >> n;

    if(n == 2) i = 11;
    if(n == 4) i = 1000;
    if(n == 6) i = 100000;
    if(n == 8) i = 10000000;
    size = pow(10, n);

    int *array = (int*) malloc(sizeof(int) * size);
    
    for(i ; i < size; i++){
       int tmp  = i;
        vector <int> digits;
        vector <int>::iterator it;
        
        while(tmp > 10){
            digits.push_back(tmp % 10);
            tmp /= 10;
        }
        digits.push_back(tmp);
        //sort(digits.begin(), digits.end(), myfunc);
        int b_sum = 0, e_sum = 0;

        for(int i = 0; i < n / 2; i++) b_sum += digits[i];
        for(int i = n / 2; i < n; i++) e_sum += digits[i];

        if(b_sum == e_sum){
            count++;
            /* for(int i = 0; i < digits.size(); i++) cout << digits[i];
            cout << endl; */
        } 
    }

    cout << count << endl;
    return 0;
}