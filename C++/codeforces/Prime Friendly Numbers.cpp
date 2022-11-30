#include <iostream>
#include <math.h>
#define endl '\n'
using namespace std;
bool check = false;

int is_prime(int n){
    int sqr = sqrt(n) + 1;
    if (n == 2) return 1;
    else if(n % 2 == 0) return 0;
    else {
        for(int i = 3; i <= sqr; i += 2){
            if(n % i == 0){
                return 0;
            }
            else return 1;
        }
    }
}
int main(){
    int t;
    unsigned long long n, m, k;
    cin>>t;
    int prime = 0;

    while(t > 0){
        cin>>n;
        for(int i = n; i > 0; i--){
            if(is_prime(i)){
                m = i;
                while(m != 0){
                    k  = m % 10;
                    if(is_prime(k) == 0){
                        prime = 1;
                    }
                    //else prime = 1;
                    m = m / 10;
                }
                if(prime != 1){
                    cout<<i<<endl;
                    break;
                }
            }
        }
            
        t--;
    }
    
}