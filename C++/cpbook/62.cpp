#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        if(c >= 'A' && c <= 'Z'){
            cout<<"Uppercase Character"<<endl;
        }
        else if(c >= 'a' && c <= 'z'){
            cout<<"Lowercase Character"<<endl;
        }
        else if(c >= 0 && c <= 9){
            cout<<"Numerical Digit"<<endl;
        }
        else{
            cout<<"Special Character"<<endl;
        }
    }
    return 0;
}// wrong answer :(