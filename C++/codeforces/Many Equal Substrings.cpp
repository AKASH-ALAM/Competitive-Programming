#include <iostream>
#include <string.h>
using namespace std;
#define endl '\n'
int main(){
    int n, k, i, j;
    cin>>n>>k;
    char s[n], s2[n];
    for(i = 0; i < n; i++) cin>>s[i];
    if(n > 1) {
        for(i = n - 1, j = 0; i >= 0; i--,j++) s2[j] = s[i];
    }
    
    s[n] = '\0',s2[n] = '\0';
    //cout<<s<<endl<<s2<<endl;
    if(strcmp(s,s2) == 0){
        cout<<s;
        k--;
        while(k--){
            for(i = 1; i < n; i++) cout<<s[i];
        }
        cout<<endl;
    }
    else {
        while(k--) cout<<s;
        cout<<endl;
    }
    return 0;
}