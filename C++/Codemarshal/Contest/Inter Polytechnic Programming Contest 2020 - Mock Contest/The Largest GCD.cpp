#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b){
    //cout << a << " " << b << endl;
    int get, t;
    if(a == 0) get = b;
    else if (b == 0) get = a;
    else {
        while (b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        get = a;
    }
    return get;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;    cin >> n;
        long long *arry = (long long*) malloc(sizeof(long long) * n);
        for(int i = 0, j = 1; j <= n; i++, j++){
            arry[i] = j;
        }
    int found = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                int tmp = gcd(arry[i], arry[j]);
                if(tmp > found) found = tmp;
            }
        }

        cout << found << endl;
    }
    return 0;
}