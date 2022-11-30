#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        char s[150];
        scanf(" %[^\n]",s);
        int len = strlen(s),p,check = 0,tmp = 0;
        int loop = len,space = 0;
        for(j = 0; j < loop; j++){
            for(i = 0; i < len; i++){
                if(s[i] == ' '){
                    p = i;
                    check++;
                }  
            }
            if(check == 0){ 
                for(i = 0; i < loop; i++){
                    if(s[i] == ' '){
                        space = 1;
                        break;
                    }
                }
                if(space == 0){
                    cout<<s;
                    break;
                }
                else if(tmp == 0){
                    for(i = 0; s[i] != ' '; i++){
                        cout<<s[i];
                    }
                    tmp = 1;
                }
            }
            else{
                for(i = p + 1; i < len; i++){
                    cout<<s[i];
                    check = 0;
                }
            }
            len = p;
            if(tmp == 0){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}