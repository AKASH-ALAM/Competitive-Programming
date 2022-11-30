#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,c;
   char s[101],st[101];
   cin>>s>>st;
   int len = strlen(s);
   for(i = 0; s[i] != '\0'; i++){
        if('A' <= st[i] && 'Z' >= st[i]) {
            st[i] = 'a' + (st[i] - 'A');
            
        }
        if('A' <= s[i] && 'Z' >= s[i]){
            s[i] = 'a' + (s[i] - 'A');
        }
   }
   //cout<<s<<endl<<st<<endl;
    c = strcmp(s,st);
    if(c >= 1){
        c = 1;
    }
    else if(c < 0){
        c = -1;
    }
    cout<<c<<endl;
}
