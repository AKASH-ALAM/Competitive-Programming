/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

#define MAX 3001
vector <int> primes;
bool isPrime[MAX];
bool marked[MAX];

void sieve(){
    for(int i = 0; i < MAX; i++) isPrime[i] = true;

    for(int i = 3; i*i < MAX; i += 2){
        if(isPrime[i]){
            for(int j = i*i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i <= MAX; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
            marked[i] = true;
        } 
    }
}

bool almostPrime(int n){
    int cnt = 0;
    for(int i = 0; primes[i] * 2 <= n; i++){
        if(n % primes[i] == 0) cnt++;
        if(cnt > 2) return false;
    }
    if(cnt == 2) return true;
    return false;
}

int main(){
    Fast_io;
    sieve();
    int n;  cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(marked[i] == false and almostPrime(i) == true) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
