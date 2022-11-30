#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        char s[11];
        cin>>s;
        int count = 0, len = strlen(s),n = len - 1;
        for(i = 0; i < len; i++){
            if(s[i] > 48){
                n = i;
                break;
            }
        }
        for(i = n; i < len; i++){
            count++;
        }
        if(count == 0){
            count = 1;
        }
        cout<<count<<endl;
    }
    return 0;
}