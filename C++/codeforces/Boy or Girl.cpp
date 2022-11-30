#include <iostream>
#include <string.h>
using namespace std;
#define size 101
int main(){
    char s[size];
    cin>>s;
    int i = 0,j, cnt = 0;
    int len = strlen(s);
    while(i < len){
        for(j = 1 + i; j < len; j++){
            if(s[i] == s[j]){
                //cnt++;
                s[j] = ' ';
            }
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            cnt++;
        }
        i++;
    }
    //cnt = len - cnt;
    //cout<<s<<endl;
    if(cnt % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
