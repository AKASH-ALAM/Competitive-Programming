#include <iostream>
#include <string.h>
#define endl '\n'
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char letter[] = "abcdefghijklmnopqrstuvwxyz";
    int n, check = 0;
    char ch;
    cin>>n;
    char s[101]; 
    for(int i = 0; i < n; i++){
        cin>>ch;
        if(ch >= 'A' && ch <= 'Z') ch = 'a' + (ch - 'A');
        s[i] = ch;
    }
    if(n >= 26){
        for(int j = 0; j < 26; j++){
            for(int i = 0; i < n; i++){
                if(letter[j] == s[i]){
                    check++;
                    break;
                }
                
            }
        }
    }
    //cout<<check<<endl;
    if(check == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}