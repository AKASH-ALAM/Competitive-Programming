#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j;
    char swp;
    string s;
    cin>>s;
    for(i = 0; i < s.length(); i++){
        for(j = 0; j < s.length() - 1; j++){
            if(s[j] > s[j+1]){
                swp = s[j];
                s[j] = s[j+1];
                s[j+1] = swp;
            }
        }
    }
    for(i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            cout<<s[i];
            if(i != s.length() - 1){
                cout<<'+';
            }
        }
    }
    cout<<endl;
    return 0;
}