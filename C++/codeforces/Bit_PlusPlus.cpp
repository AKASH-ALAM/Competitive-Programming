#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    int p = 0,m = 0,checkP,checkM,check;
    cin>>t;
    while(t--){
        char temp[3];
        cin>>temp;
        for(i = 0; i < 3; i++){
            if(temp[i] == '+' && temp[i+1] == '+'){
                p++;
            }
            else if(temp[i] == '-' && temp[i+1] == '-'){
                m++;
            } 
        }
    }
    if(p > m){
            check = p - m;
        }
    else{
            check = m - p;
        }
    cout<<check<<endl;
    return 0;
}