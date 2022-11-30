#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,i=0;
    cin>>x>>y;
    if(x>y){
        int c = x;
        x = y;
        y = c;
    }
    for(x; x<=y; x++){
        if(x % 13 != 0){
            i = i + x;
        }
    }
    cout<<i<<endl;
}
