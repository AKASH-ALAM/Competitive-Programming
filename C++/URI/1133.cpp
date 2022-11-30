#include<iostream>
using namespace std;
int main(){
    int c,x,y;
    cin>>x>>y;
    if(x>y){
        c = y;
        y = x;
        x = c;
    }
    for(int i = x + 1; i < y; i++ ){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;

        }
    }
}
