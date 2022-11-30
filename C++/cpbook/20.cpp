#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,t;
    cin>>t;
    while(t--){
        char s[1001];
        scanf(" %[^\n]",s);
        int start = 0,count = 0;
        int len = strlen(s);
        for(i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'|| s[i] == '\''){
                if(start == 0){
                    start = 1;
                    count++;
                }
            }
            else if(s[i] == ' '){
                start = 0;
            }
        }
        cout<<count*420<<endl;
    }
    return 0;
}