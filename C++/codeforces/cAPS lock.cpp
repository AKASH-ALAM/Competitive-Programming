#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int i = 0, count = 0, tmp = 0;
    cin>>str;
    for(i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
        else{
            tmp = 1;
            break;
        }
    }
    if(count != 0 && tmp != 1){
        for(i = 0; i < str.length(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = (str[i] - 'A') + 'a';
        }
        cout<<str<<endl;
        return 0;
    }
    if(str[i] >= 'A' && str[i] <= 'Z' && str.length() == 1){
        str[i] = (str[i] - 'A') + 'a';
        cout<<str<<endl;
        return 0;
    }
        
    if(str.length() < 3 && (str[0] >= 'a' && str[0] <= 'z')){
        for(i = 0; i < str.length(); i++){
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = (str[i] - 'A') + 'a';
                else
                    str[i] = (str[i] - 'a') + 'A';
            }
        cout<<str<<endl;
        return 0;
    }
    for(i = 1; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
        else{
            count = 0;
            break;
        }
    }
    if(count >= 2){
        for(i = 0; i < str.length(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = (str[i] - 'A') + 'a';
            else if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = (str[i] - 'a') + 'A';
        }
        cout<<str<<endl;
    }
    else cout<<str<<endl;
    return 0;
}