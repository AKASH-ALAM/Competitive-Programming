#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int j = 1, t;
    cin>>t;
    while(j <= t){
        int n, l, h, i, flag = 1;
        cin>>n>>l>>h;
        float arry[n], avg = 0, Da, Dl, Dh, Db;
        for(i = 0; i < n; i++){
            cin>>arry[i];
            avg = avg + arry[i];
        } avg = avg / n; 
        cout<<"Case "<<j<<":"<<endl;
        for(i = 0; i < n; i++){
            Da = (arry[i] - avg);if(Da < 0) Da = Da * (-1);
            Dl = (arry[i] - l);
            Dh = (arry[i] - h); if(Dh < 0) Dh = Dh * (-1);
            Db = min(Dl,Dh);
            if(Db < Da){
                printf("%.2lf\n", arry[i]);
                flag = 0;
            }
        }
        if(flag) cout<<"No outliers"<<endl;
        j++;
    }
    return 0;
}