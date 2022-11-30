#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    float arry[100];
    for(i = 0; i < 100; i++){
        cin>>arry[i];
    }
    for(i = 0; i < 100; i++){
        if(arry[i] <= 10){
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<arry[i]<<endl;
        }
    }
}
