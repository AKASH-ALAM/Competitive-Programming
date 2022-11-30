#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 477 == 0){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}