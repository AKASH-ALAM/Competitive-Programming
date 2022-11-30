#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i;
        string s;
        cin>>s;
        for(i = 0; i < s.length(); i++){
            cout<<s[i] - 'A' + 1;
        }
        cout<<endl;
    }
    return 0;
}