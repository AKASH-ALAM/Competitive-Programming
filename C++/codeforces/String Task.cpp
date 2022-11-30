#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    char s[101];
    cin>>s;
    int len = strlen(s);
    for(i = 0; i < len; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y'){
                cout<<"."<<s[i];
            }
        }
    }
    cout<<endl;

}

