#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;  cin >> t;
    while (t--)
    {
        ll n, divisor;   cin >> n;
        if(n % 2 == 0){
            while(n % 2 == 0){
                n /= 2;
            }
            divisor = n;
        }
        for(int i = 3; i*i <= n; i += 2){
            if(n % i == 0){
                while (n % i == 0)
                {
                    n /= i;
                }
                divisor = i;
            }
        }
        if(n > divisor) divisor = n;
        if(divisor == 1 || n == 1) divisor = -1;
        cout << divisor << endl;
    }
    
}
97
10000000000000
-10000000000000
1000386037249
33037173805399
