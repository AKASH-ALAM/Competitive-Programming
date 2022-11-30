#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,i = 1;
        cin>>x>>n;
        if(x > n){
            cout<<"Invalid!"<<endl;
        }
        else{
            while(1){
                int m = x * i;
                i++;
                if(m > n)
                    break;
                cout<<m<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}