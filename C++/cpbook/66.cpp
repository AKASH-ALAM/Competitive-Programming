#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        char s[1000];
        int count = 0;
        scanf(" %[^\n]",s);
        for(i = 0; i < strlen(s); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                count++;
            }
        }
        cout<<"Number of vowels = "<<count<<endl;
    }
    return 0;
}