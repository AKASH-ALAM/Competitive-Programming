#include<iostream>
using namespace std;
int main(){
    int i,n;
    int arry[20];
    for(i = 0; i < 20; i++){
        cin>>arry[i];
    }
    for(i = 19; i >= 0; i--){
        cout<<"N["<<19-i<<"] = "<<arry[i]<<endl;
    }
}
