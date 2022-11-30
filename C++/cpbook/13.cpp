#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,t;
    cin>>t;
    while(t--){
        char s[51];
        cin>>s;
        int len = strlen(s);
        for(i = 0; i < len; i++){
            if(s[i] == 'L'){
                s[i] = s[i-1];
            }
            else if(s[i] == 'R'){
                s[i] = s[i+1];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}