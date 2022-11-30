#include<iostream>
using namespace std;
int main(){
    int x,y;
    while(cin>>x>>y){
        if(x==y){
            return 0;
        }
        else if(x < y){
            cout<<"Crescente"<<endl;
        }
        else{
            cout<<"Decrescente"<<endl;
        }
    }
}
