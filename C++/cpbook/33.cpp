#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++){
        int a,b,c,ab,bc;
        cin>>a>>b>>c;
        if(a > b && b > c){
            int tmp = a;
            a = c;
            c = tmp;
        }
        ab = b - a,bc = c - b;
        /*if(a == 0){
            cout<<"Case "<<i<<": None"<<endl;
        } :)
        else*/ if(b % a == 0 && c % b == 0 && ab == bc){
            cout<<"Case "<<i<<": Both"<<endl;
        }
        else if(ab == bc){
            cout<<"Case "<<i<<": Arithmetic Progression"<<endl;
        }
        else if(b % a == 0 && c % b == 0){
            cout<<"Case "<<i<<": Geometric Progression"<<endl;
        }
        else{
            cout<<"Case "<<i<<": None"<<endl;
        }
    }
    return 0;
}