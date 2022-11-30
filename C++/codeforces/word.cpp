#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#define size 101
int main(){
    char s[size];
    cin>>s;
    int i, capital = 0;
    int len = strlen(s);
    for(i = 0; i < len; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') capital++;
    }
    int result = len - capital;
    if(result >= capital){
        for(i = 0; i < len; i++){
            if(s[i] >= 'A' && s[i] <= 'Z') printf("%c",(s[i] - 'A') + 'a');
            else cout<<s[i];
        }
        cout<<endl;
    }
    else{
        for(i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z') printf("%c",(s[i] - 'a') + 'A');
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

