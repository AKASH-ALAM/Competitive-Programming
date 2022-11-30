#include<iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i = 1; i <= t; i++){
        int n ;
        cin>>n;
        if(n >= 80 && n <= 100){
            cout<<"Case "<<i<<": A+"<<endl;
        }
        else if(n >= 75 && n <= 79){
            cout<<"Case "<<i<<": A"<<endl;
        }
        else if(n >= 70 && n <= 74){
            cout<<"Case "<<i<<": A-"<<endl;
        }
        else if(n >= 65 && n <= 69){
            cout<<"Case "<<i<<": B+"<<endl;
        }
        else if(n >= 60 && n <= 64){
            cout<<"Case "<<i<<": B"<<endl;
        }
        else if(n >= 55 && n <= 59){
            cout<<"Case "<<i<<": B-"<<endl;
        }
        else if(n >= 50 && n <= 54){
            cout<<"Case "<<i<<": C"<<endl;
        }
        else if(n >= 45 && n <= 49){
            cout<<"Case "<<i<<": D"<<endl;
        }
        else{
            cout<<"Case "<<i<<": F"<<endl;
        }
    }
    return 0;
}
