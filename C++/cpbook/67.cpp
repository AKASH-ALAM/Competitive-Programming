#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        char s[101];
        scanf(" %[^\n]",s);
        int len = strlen(s);
        for(i = 0; i < len; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
                cout<<s[i];
            }
        }
        cout<<endl;
        for(i = 0; i < len; i++){
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u' && s[i] != ' '){
                cout<<s[i];
            }
        } 
        cout<<endl;
    }
    return 0;
}