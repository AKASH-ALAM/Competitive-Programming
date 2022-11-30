#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    string s;   cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'W'&& s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
        }
        else{
            cout << s[i];
            if(s[i+1] == 'W'&& s[i+2] == 'U' && s[i+3] == 'B') cout << " ";
        }
    } cout << endl;

    return 0;
}