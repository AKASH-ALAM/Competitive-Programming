#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        string s;
        int temp = 1;
        cin>>s;
        for(i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
        for(i = s.length() - 1,j = 0; i >= 0; i--,j++){
            if(s[i] == s[j]){
                temp = 0;
            }
            else {
                temp = 1;
                break;
            }
        }
        if(temp == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}