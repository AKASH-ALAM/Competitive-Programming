#include <iostream>

using namespace std;
int main(){
    char p[101];
    scanf(" %[^\n]",p);
    int i, check = 0;

    for(i = 0; p[i] != '\0'; i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            check = 1;
            break;
        }
    }
    if(check == 1) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;
    return 0;
}