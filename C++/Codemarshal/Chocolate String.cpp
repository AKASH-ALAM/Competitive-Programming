#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int t, i, j;
    cin>>t;
    while(t--){
        char s[1001];
        cin>>s;
        for(i = 0; s[i] < '\0'; i++){
            for(j = strlen(s) - 1; j >= 0; j--){
                if(s[i] == s[j]){
                    
                }
            }
        }
    }
}