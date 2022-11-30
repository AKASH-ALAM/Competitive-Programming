#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[s.length()-1] % 2 == 0){
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl; 
    }
    return 0;
}