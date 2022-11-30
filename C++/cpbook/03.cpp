/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,t;
    cin>>t;
    while(t--){
        int i,start = 0,count = 0;
        char s[10001];
        scanf(" %[^\n]",s);
        for(i = 0; i < strlen(s); i++){
            if(s[i] >= '0' && s[i] <= '9' && start == 0){
                start = 1;
                count++;
            }
            else if(s[i] == ' '){
                start = 0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}*/
#include <iostream>
#define endl '\n'
#define size 10001
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[size];
        int i, count = 0;
        scanf(" %[^\n]", s);
        for(i = 0; s[i] != '\0'; i++){
            if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') count++;
        }
        cout<<count+1<<endl;
    }
    return 0;
}