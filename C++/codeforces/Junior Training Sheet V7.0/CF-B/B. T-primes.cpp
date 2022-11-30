#include <bits/stdc++.h>
#define endl '\n'
#define first_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
using ull = unsigned long long;
#define MAX 1000000

vector <ull> prime;

void sieve(ull upperBound){
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

int countDivisor(ull n){
    if((!(n % 2) && n > 4)) return 4;
    int divisor = 1;
    sieve(sqrt(n+1) + 2);
    for(int i = 0; i < prime.size(); i++){
        if(!(n % prime[i])){
            int cnt = 1;
            while(!(n % prime[i])){
                n /= prime[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}

int main(){
    first_io;

    long long size, i, j;   cin >> size;
    ull *arry = (ull*) malloc (sizeof(ull) * size);

    for(int i = 0; i < size; i++)   cin >> *(arry+i);

    for(i = 0; i < size; i++){
        if(countDivisor(arry[i]) == 3) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
