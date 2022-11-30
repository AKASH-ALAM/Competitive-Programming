#include<iostream>
using namespace std;
int main(){
    unsigned long long n;
    cin>>n;
    if(n % 31 == 0){
        cout<<"Accepted"<<endl;
    }
    else{
        cout<<"Rejected"<<endl;
    }
    return 0;
}