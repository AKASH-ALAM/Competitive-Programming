#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
int main(){
    int t, i;
    string s;
    cin>>t;
    
    while(t--){
        cin>>s;
        int count = 0, over = 0, ball = 0;
        for(i = 0; s[i] != '\0'; i++){
            if((s[i] >= '0' && s[i] <= '6') || s[i] == 'O') count++;
        }
        cout<<count<<" BALLS"<<endl;
        if(count > 5){
            over = count / 6;
            ball = count % 6;
        }
        if(ball && over) cout<<over<<" OVER "<<ball<<" BALLS"<<endl;
        else if(over) cout<<over<<" OVER"<<endl;
    }
    return 0;
}
