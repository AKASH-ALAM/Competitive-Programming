#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s, s2; cin >> s;
        s2 = s;
        int tmp;

        sort(s2.begin(), s2.end());
        if(s2[0] == s2[s2.length()-1]){
            if(s2.length() % 2){
                tmp = (s2.length() / 2) + 2;
            } else tmp = (s2.length() / 2) + 1;

            for(int i = 0; i < tmp; i++){
                cout << s2[0];
            } cout << endl;
        }
        else { 
            for(int i = 0; s[i] != '\0'; i++){
                if(s[i] == s[i+1]){
                    s[i+1] = ' ';
                }
            }

            for(int i = 0; s[i] != '\0'; i++){
                if(s[i] != ' '){
                    cout << s[i];
                } 
            } cout << endl;
        }
    }

    return 0;
}