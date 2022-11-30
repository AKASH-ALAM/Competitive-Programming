#include <bits/stdc++.h>
using namespace std;
#define MAX 32000

vector <int> prime, factors;
vector <int>::iterator it;

void sieve(int upperBound){
    prime.push_back(2);
    bool is_prime[MAX];
    for(int i = 3; i <= upperBound; i += 2){
        if(!(is_prime[i])){
            prime.push_back(i); // i is prime
            for(int j = i*i; j <= upperBound; j += i+i) 
                is_prime[j] = true; // j is non prime
        }
    }
}

void prime_factor(int n){
    sieve(sqrt(n+1)+2);
    for(int i = 0; prime[i]*prime[i] <= n; i++){
        if(!(n % prime[i])){
            while(!(n % prime[i])){
                n /= prime[i];
                factors.push_back(prime[i]);
            }
        }
    }
    if(n > 1) factors.push_back(n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n;  cin >> n;
    
    prime_factor(n);

    for(it = factors.begin(); it != factors.end(); it++){
        cout << *it << " ";
    } cout << endl;

    return 0;
}