#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,t;
    cin>>t;
    while(t--){
        char s[9];
        cin>>s;
        int len = strlen(s),n,m = 0; 
        for(i = 0; i < len; i++){
            if(s[i] % 2 == 0){
                s[i] = s[i] + 1;
          }
            else{
                s[i] = s[i] - 1;
            }
        }
        for(i = 0; i < len; i++){
                if(s[i] > 48 ){
                    m = i;
                    break;
                }
            }
        for(i = m; i < len; i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
