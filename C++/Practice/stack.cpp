#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx;
    cout<<"Enter The size of stack: ";
    cin>>mx;
    int st[mx],top,n,i;
    top = 0;
    cout<<"How many data you want to push: ";
    cin>>n;
    for(i = 0; i < n; i++){
        if(top == mx){
            cout<<"stack overflow"<<endl;
            break;
        }
        else if(top < mx){
            cin>>st[top];
            top++;
        }
    }
    cout<<"Stack is:"<<endl;
    for(i = 0; i < top; i++){
        cout<<st[i]<<" ";
    }
    cout<<endl;
    if(top == 0){
        cout<<"Stack underflow"<<endl;
    }
    else{
        int item;
        item = st[top - 1];
        top--;
        cout<<"We deleted "<<item<<endl;
        for(i = 0; i < top; i++){
            cout<<st[i]<<" ";
        }
    }
    return 0;
}
