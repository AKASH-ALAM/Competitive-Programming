#include <iostream>
#include <string.h>
#define endl '\n'
#define size 1001
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[size];
        scanf(" %[^\n]",s);
        
        int i, j, index, flag = 1, tmp_index, stop_loop = 0;

        for(i = 0; s[i] != '\0'; i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
                if(flag){
                    tmp_index = i;
                    flag = 0;
                    stop_loop = 1;
                }
                index = i;
            }

            if((s[i+1] == ' ' || s[i+1] == '\0') && stop_loop){
               for(j = index; j >=tmp_index; j--) cout<<s[j];
                if(s[i+1] != '\0') cout<<" ";
                flag = 1;
                stop_loop = 0;
            }
        }
        cout<<endl;
    }
    return 0;
}