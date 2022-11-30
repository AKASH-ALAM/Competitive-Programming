#include<iostream>
using namespace std;
int main(){
    int t,i = 1;
    cin>>t;
    while(i <= t){
        int r1,c1,r2,c2,tmp;
        cin>>r1>>c1>>r2>>c2;
        if(r1 > r2){
            tmp = r2;
            r2 = r1;
            r1 = tmp;
        }
        if(c1 > c2){
            tmp = c2;
            c2 = c1;
            c1 = tmp;
        }
        r1 = r2 - r1;
        c1 = c2 - c1;
        cout<<"Case "<<i<<": ";
        if(r1 > c1){
            cout<<r1<<endl;
        }
        else{
            cout<<c1<<endl;
        }
        i++;
    }
    return 0;
}