#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char i, j, h = 0, e = 0, l = 0, o = 0;
    char h_position, e_position, l_position, o_position;

    for(i = 0; i < s.length(); i++){
        if('h' == s[i] && h == 0){
            h = 1;
            h_position = i;
        }
        else if('e' == s[i] && h == 1 && e == 0 && l == 0){
            e = 1;
            e_position = i;
        }
        else if('l' == s[i] && l != 2 && o == 0 && e == 1){
            l++;
            l_position = i;
        }
        else if('o' == s[i] && o == 0 && l == 2){
            o = 1;
            o_position = i;
        }
    }

    if (h == 1 && e ==  1 && l == 2 && o == 1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}