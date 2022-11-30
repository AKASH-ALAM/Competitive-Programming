#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    char ch[101];
    int m;
    cin>>m;
    while(m--){
        cin>>ch;
        int s = strlen(ch);
        if(s > 10){
            cout<<ch[0]<<s-2<<ch[s - 1]<<endl;
        }
        else{
            cout<<ch<<endl;
        }
    }
   return 0;
}