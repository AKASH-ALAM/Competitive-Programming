#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int p = 0;
        cin>>n;
        int sqr = sqrt(n);
        if(n == 2){
            p = 1;
        }
        else if(n % 2 == 0){
            p = 0;
        }
        else{
            for(int i = 3; i <= sqr; i = i + 2){
                if(n % i == 0){
                    p = 0;
                }
                else
                    p = 1;
            }
        }
        if(p == 1){
            cout<<n<<" is a prime"<<endl;
        }
        else
            cout<<n<<" is not a prime"<<endl;
    }
    return 0;
}