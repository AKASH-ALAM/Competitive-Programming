#include <bits/stdc++.h>
using namespace std;

#define M 1000000
bool Marked[M];

bool isPrime(int n){
    if(n == 2) return true;
    if(n < 2 || n % 2 == 0) return false;
    return Marked[n] == false;
}

void Sieve(int n){
    for(int i = 3; i*i <= n; i += 2){
        if(Marked[i] == false){
            for(int j = i*i; j <= n; j += (i + i)){
                Marked[j] = true;
            }
        }
    }
}

int main(){
    int n;  cin >> n;
    Sieve(n);
    cout << (isPrime(n) ? "Prime" : "Not Prime!") << endl;
    return 0;
}