#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    int i,c = 0;
    for(i = 0; i < 6; i++){
        cin>>n;
        if(n > 0){
            c++;
        }
    }

    cout<<c<<" valores positivos"<<endl;
}
