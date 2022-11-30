#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int i, j, check = 0;
    for(i = s.length() - 1, j = 0; i >= 0; i--, j++){
        if(s[i] == t[j]){
            check = 0;
        }
        else{
            check = 1;
            break;
        }
    }

    if(check == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        }
        
    return 0;
}