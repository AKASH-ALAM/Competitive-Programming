#include<iostream>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    for(int k = 1; k <= t; k++){
        int d,h;
        cin>>d>>h;
        cout<<"Case "<<k<<":"<<endl;
        for(i = 0; i < h; i++){
            for(j = 0; j <= i; j++){
                cout<<d;
            }
            cout<<endl;
        }
    }
    return 0;
}