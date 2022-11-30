#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    for(int i = 0; s[i] != '\0'; i++){
        for(int j = i + 1; s[j] != '\0'; j++){
            if(s[i] == s[j]) s[j] = ' ';
        }
    }

    int len = 0; 
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ') continue;
        else len++;
    }

    if(len % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}