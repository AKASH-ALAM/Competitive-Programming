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
        if(count < 6){
            if(count == 1){
                cout<<count<<" BALL"<<endl;
            } else{
                cout<<count<<" BALLS"<<endl;
            }
            
        }
        
        else if(count > 5){
            over = count / 6;
            ball = count % 6;
        }
        if(ball && over){
            if(over == 1 && ball > 1){
                cout<<over<<" OVER "<<ball<<" BALLS"<<endl;
            }
            else if(over == 1 && ball == 1){
                cout<<over<<" OVER "<<ball<<" BALL"<<endl;
            }
            else if(over > 1 && ball == 1){
                cout<<over<<" OVERS "<<ball<<" BALL"<<endl;
            } else {
                cout<<over<<" OVERS "<<ball<<" BALLS"<<endl;
            }
        } 
        
        else if(over){
            if(over > 1){
                cout<<over<<" OVERS"<<endl;
            } else {
                cout<<over<<" OVER"<<endl;
            }
        }
    }
    return 0;
}
