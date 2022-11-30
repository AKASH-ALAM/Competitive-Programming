#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,ss;
        cin>>s>>ss;
        int i,j,p = 0;
        //wrong answer :(
        int len = ss.length() - 1;
        for(i = 0; i < s.length(); i++){
            if(len > 3){
                int len2 = len / 2, len3 = len / 3;
                if(s[i] == ss[0] && s[i + len] == ss[len] && s[i + len2] == ss[len2] && s[i + len3] == ss[len3]){
                    p = i;
                    break;
                }
            }
            else{
                    if(s[i] == ss[0] && s[i + len] == ss[len]){
                        p = i;
                        break;
                    }
            }
        }
        cout<<p<<endl; 
    }
    return 0;
}