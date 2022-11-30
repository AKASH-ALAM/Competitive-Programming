#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int t, j = 1;
    cin>>t;
    getchar();
    while(j <= t){
        int i;
        char s[100];
        gets(s);
        for(i = 0; i < strlen(s); i++){
        cout<<"Case "<<j<<":";
            if(s[i] == ' '){
                cout<<s[i];
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = 'A' + (s[i] - 'a');
                cout<<s[i];
            }
            else{
                cout<<s[i];
            }
        }
        j++;
        cout<<endl;
    }
}
