#include<iostream>
using namespace std; 
int main()
{
    int t,arry[5];
    cin>>t;
    while(t--){
        int c = 0;
        for(int i = 0; i < 5; i++){
            cin>>arry[i];
        }
        for(int i = 0; i<5; i++){
            c =  c + arry[i];
        }
        cout<<c/5<<endl;

    }
    return 0;
}
