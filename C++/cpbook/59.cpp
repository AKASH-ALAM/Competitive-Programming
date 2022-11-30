#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,remainder,number = 0;
        cin>>n;
        int tmp = n;
        while(n != 0){
            remainder = n % 10;
            number = number + pow(remainder,3);
            n = n / 10;
        }
       if(tmp == number)
          cout<<tmp<<" is an armstrong number!"<<endl;
        else
            cout<<tmp<<" is not an armstrong number!"<<endl;
    }
    return 0;
}