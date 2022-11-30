#include <iostream>
#include <string.h>
#define endl '\n'

using namespace std;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); */

    int t;
    cin>>t;
    while(t--){
        char s[1001], s2[1001];
        scanf(" %[^\n]", s);
        int len = strlen(s), first = len / 2;

        for(int i = len - 1, j = 0; i >= 0; i--,j++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                s2[j] = s[i] + 3;
            }
            else{
                s2[j] = s[i];
            }
        }
        for(int i = 0; i < len; i++){
            if(first){
                cout<<s2[i];
                first--;
            }
            else cout<<(char)(s2[i] - 1);
        }
        cout<<endl;
    }
    return 0;
}
