#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;  cin >> t;
    for(int i = 1; i <= t; i++){
        string s;   cin >> s;
        
        int str[255];
        for(int i = 0; i < 255; i++) str[i] = 0;

        cout << "Case #" << i << ":" << endl;

        int cnt = 1;
        for(int i = 0; i < s.length(); i++){

            /* if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = (s[i] - 'A') + 'a';
            } */

            str[s[i]]++;
        }

        for(int i = 0; i < s.length(); i++){
            if(str[s[i]]){
                cout << s[i] << " " << str[s[i]] << endl;
                str[s[i]] = 0;
            } 
        }
        
    }
    return 0;
}