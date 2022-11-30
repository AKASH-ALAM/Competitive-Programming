#include <iostream>
#include <string>
#define endl '\n'

using namespace std;

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); */

    int t; cin>>t;
    while(t--){
        int size; cin>>size;
        string s[size];
        
        for(int i = 0; i < size; i++) cin>>s[i]; //input
        cout<<endl;
        string temp;
        for(int i = 0; i < size; i++)
            for(int j = i + 1; j < size; j++)
                if(s[i] > s[j]){
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
        
        for(int i = 0; i < size; i++) cout<<s[i]<<endl; //output
        
    }
    cout<<endl;
    return 0;
}