#include<iostream>
#include<math.h>
using namespace std;
int is_prime(int arry[]){
    int s,i;
    for(i = 0; i < 10; i++){
        s = sqrt(arry[i]);
        if(arry[i] == 2){
            return 1;
        }
        if(arry[i] % 2 == 0){
            return 0;
        }
    }
    for(i = 3; i <= s; i = i + 2){
            if(2 % i == 0){
                return 0;
            }
            return 1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int arry[10],i,m,check,p = 0;
        for(i = 0; i < 10; i++){
            cin>>arry[i];
        }
        check = is_prime(arry);
        cout<<p<<endl;
    }
    return 0;
}