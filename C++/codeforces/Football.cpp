#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,zero = 0, one = 1;
    string s;
    cin>>s;
    for(i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            one++;
            zero = 0;
            if(one == 7)
                break;
        }
        else if(s[i] == '0'){
            zero++;
            one = 0;
            if(zero == 7){
                break;
            }
        }
    }
    if(zero == 7 || one == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}