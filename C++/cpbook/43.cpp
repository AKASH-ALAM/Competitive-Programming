#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float OpponentRun,battmansRun,remainingball;
        cin>>OpponentRun>>battmansRun>>remainingball;
        float ball = 50 - (remainingball / 6),runrate = 0,Desiredrun = 0;
        runrate = battmansRun / ball;
        remainingball = remainingball / 6;
        OpponentRun = (OpponentRun - battmansRun) + 1;
        Desiredrun =OpponentRun / remainingball;
        cout<<fixed<<setprecision(2)<<runrate<<" "<<Desiredrun<<endl;
    }
    return 0;
}