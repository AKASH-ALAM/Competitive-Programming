/* #include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,t;
    cin>>t;
    while(t--){
        char s[10001];
        scanf(" %[^\n]",s);
        int start = 0,count = 0;
        int len = strlen(s);
        for(i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'|| s[i] == '\''){
                if(start == 0){
                    start = 1;
                    count++;
                }
                //cout<<s[i];
            }
            else if(s[i] == ' '){
                start = 0;
                //cout<<endl;
            }
        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
} */

#include <iostream>
#define size 10001
#define endl '\n'

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[size];
        scanf(" %[^\n]",s);
        int count = 1;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == ' ') count++;
        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
}