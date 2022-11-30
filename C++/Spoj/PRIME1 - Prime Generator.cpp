#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define MAX 32000
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector <int> prime;
bitset <MAX> is_prime;

void sieve(){
    for(int i = 3; i <= MAX; i += 2){
        if(is_prime[i] == false){
            for(int j = i * i; j <= MAX; j += 2 * i){
                is_prime[j] = true;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i < MAX; i += 2){
        if(is_prime[i] == false) prime.push_back(i);
    }  
}

void segSieve(ll l, ll r){
    if(l == 1) l = 2;
    bool array[r-l+1];
    for(int i = 0; i < r-l+1; i++) array[i] = true;
   
    for(int i = 0; prime[i] * prime[i] <= r; i++){
        int cp = prime[i];
        int base = (l/cp) * cp;
        if(base < l) base += cp;
        for(int j = base; j <= r; j += cp){
            array[j-l] = false;
        }
        if(base == cp) array[base-l] = true;
    }
    for(int i = 0; i < r-l+1; i++){
        if(array[i]) cout << (i+l) << endl;
    } cout << endl;
}

int main(){
    Fast_io;

    sieve();
    int t;  cin >> t;
    while(t--){
        ll l, r;    cin >> l >> r;
        segSieve(l,r);
    }

    return 0;
}
