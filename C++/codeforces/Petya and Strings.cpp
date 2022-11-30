#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,check = 0,check2 = 0,count;
   char s[101],st[101];
   cin>>s>>st;
   int len = strlen(s);
   for(i = 0; s[i] != '\0'; i++){
        if(('A' <= s[i] && 'Z' >= s[i])){
            s[i] = 'a' + (s[i] - 'A');
        }
        if('A' <= st[i] && 'Z' >= st[i]) {
            st[i] = 'a' + (st[i] - 'A');
        }
   }
   for(i = 0; s[i] != '\0'; i++){
    check += s[i];
    check2 += st[i];
   }
   if(check > check2){
        count = 1;
   }
   else if(check < check2){
    count = -1;
   }
   else if(check == check2){
    count = 0;
   }
   cout<<count<<endl;
}
