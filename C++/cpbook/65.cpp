#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;//from trailing zeros :)
        int zero = (n / 5) + (n / (5*5));
        cout<<zero<<endl;
    }
    return 0;
}