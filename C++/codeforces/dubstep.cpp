#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int i, flag = 0;
    cin>>s;
    for(i = 0; i < s.length(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i+2] == 'B'){
            i = i + 2;
            if(flag == 1){
                cout<<" ";
                flag = 0;
            }
        }
        else{
            cout<<s[i];
            flag = 1;
        }
    }
    cout<<endl;
    return 0;
}
