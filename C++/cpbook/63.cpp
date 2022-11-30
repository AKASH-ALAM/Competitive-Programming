#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int a,b,count = 0;
        cin>>a>>b;
        for(i = a; i <= b; i++){
            if(i == 1){
               continue;
            }
            else if(i == 2 || i == 3){
                count++;
            }
            else if(i % 2 == 0){
                continue;
            }
            else{
                int c = 0;
                for(int j = 3; j <= sqrt(i); j = j + 2){
                    if(i % j == 0){
                       c = 1;
                       break;
                    }
                }
                if(c == 0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}