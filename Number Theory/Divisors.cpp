#include <bits/stdc++.h>
#define Fast_io ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
using namespace std;
#define MAX 32000

vector <int> prime;

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
set <int> divisors;
set <int>::iterator it;

void show_divisor(int n){
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            divisors.insert(i);
            divisors.insert(n/i);
        }
    } cout << "The Divisors are : ";
    for(it = divisors.begin(); it != divisors.end(); it++){
        cout << *it << " ";
    } cout << endl;
}

int countDivisor(int n){
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
int DivisorSum(int n){
    int total = 1;
    sieve(sqrt(n+1) + 2);
    for(int i = 0; i < prime.size(); i++){
        if(!(n % prime[i])){
            int cnt = 1;
            while(!(n % prime[i])){
                n /= prime[i];
                cnt++;
            }
            total *= (pow(prime[i], cnt) - 1) / (prime[i] - 1);
        }
    }
    return total;
}

int main(){
    Fast_io;
    int n;  cin >> n;
    show_divisor(n);
    cout << "Number of Divisors = " << countDivisor(n) << endl;
    cout << "Sum of Divisors = " << DivisorSum(n) << endl;
    return 0;
}