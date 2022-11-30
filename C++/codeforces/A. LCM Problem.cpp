#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a %b);
}
ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

void find(ll l, ll r){
    if(lcm(l, r) <= r){
        cout << l << " " << r << endl;
        return;
    }
   
    bool flag = false;

    for(int i = 0; i < r-l; i++){
        for(int j = i+1; j < r-l; j++){
            if((lcm(l+i, l+j) <= r) && (l+i < l+j)){
                cout << l+i << " " << l+j << endl;
                return;
            }
        }
        flag = true;
    }
    if(flag) cout << -1 << " " << -1 << endl;
}

int main(){
    int t;  cin >> t;
    while(t--){
        ll  l, r;   cin >> l >> r;
        find(l, r);
    }
    return 0;
}