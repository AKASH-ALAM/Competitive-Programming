#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[101];
    cin >> s;
    int up = 0, lw = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            up++;
        } else lw++;
    }
/* cout << "Upper Case : " << up << endl;
cout << "Lower Case : " << lw << endl; */
    if(up == lw){
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
    } else if(up > lw){
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = 'A' + (s[i] - 'a');
            } 
        }
    } else {
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
    } 
    
    cout << s << endl;

    return 0;

}