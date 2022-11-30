#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int i,one = 0,zero = 0;
        cin>>s;
        for(i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                one++;
            }
            if(s[i] == '0'){
                zero++;
            }
            if(one < zero){
                break;
            }
        }
        if(one < zero){
            cout<<"MAGIC"<<endl;
        }
        else{
            cout<<"NORMAL"<<endl;
        }
    }
    return 0;
}