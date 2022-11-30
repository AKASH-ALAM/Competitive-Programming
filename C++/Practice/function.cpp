#include<bits/stdc++.h>
using namespace std;
int small(int a,int b){
    int sm;
    if (a<b){
        sm = a;
    }
    else{
        sm = b;
    }
    return sm;
}
int main(){
    int w,x,y,z,u;
    cin>>w>>x>>y;
    z = small(x,y);
    u = small(z,w);
    cout<<"The small number is: "<<w<<endl;
}
