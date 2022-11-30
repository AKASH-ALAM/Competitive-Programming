/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,sm,bg,i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d>>e;
    if(a>b&&a>c){
        bg = a;
    }
    else if (b>a&&b>c){
        bg = b;
    }
    else {
        bg = c;
    }
    if(a<b&&a<c){
        sm = a;
    }
    else if(b<a&&b<c){
        sm = b;
    }
    else{
        sm = c;
    }
    if(d>bg){
        bg = d;
    }
    if(e>bg){
        bg = e;
    }
    if(d<sm){
        sm = d;
    }
    if(e<sm){
        sm = e;
    }
    cout<<bg<<" "<<sm<<endl;
    }
}
*/

#include <iostream>
#define endl '\n'
#define size 5

using namespace std;
int main(){
    int arry[size], i, sm , bg;
    for(i = 0; i < size; i++){
        cin>>arry[i];
        sm = arry[0], bg = arry[0];
        if(i > 0){
            if(sm > arry[i]) sm = arry[i];
            if(bg < arry[i]) bg = arry[i];
        }
    }
    cout<<bg<<" "<<sm<<endl;
    return 0;
}