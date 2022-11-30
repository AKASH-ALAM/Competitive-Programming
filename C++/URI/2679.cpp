#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x % 2 == 0){
        x = x + 2;
    }
    else{
        x = x + 1;
    }
    cout<<x<<endl;
}
