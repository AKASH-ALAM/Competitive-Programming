#include<iostream>
using namespace std;
int main(){
    int i,j,n=4,m = 7;
    for(i = 0; i < 10; i++){
        for(j = m; j > n; j--){
            cout<<"I="<<i+1<<" "<<"J="<<j<<endl;
        }
        i++;
        m+=2;
        n+=2;
    }
}
