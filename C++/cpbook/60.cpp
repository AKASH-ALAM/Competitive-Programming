#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        char s[1001];
        scanf(" %[^\n]",s);
        for(i = strlen(s) - 1; i >= 0; i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}