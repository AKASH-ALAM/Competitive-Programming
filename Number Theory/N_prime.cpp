#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define M 10000000
bool marked[M];
bool is_prime(int n){
    if(n < 2) return false; 
    if(n == 2) return true; 
    if(n % 2 == 0) return false;
    return marked[n] == false; 
}


void seive(int n){
    for(int i = 3; i * i <= n; i += 2){
        if(marked[i] == false){
            for(int j = i * i; j <= n; j += 2*i){
                marked[j] = true;
            }
        }
    }
}

int main(){
    int n;    cin >> n;
    seive(n);
    if(is_prime(n)) cout << n << " is Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}