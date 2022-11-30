#include <iostream> 
#include <string.h> 
using namespace std;

int main(){
    char s[10001];
    int t; cin>>t;
    while(t--){
        cin>>s;
        for(int i = 0; i < strlen(s); i++){
            if(i % 2 == 0){
                cout<<s[i];
            }
        }

        cout<<" ";

        for(int i = 0; i < strlen(s); i++){
            if(i % 2 != 0){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}