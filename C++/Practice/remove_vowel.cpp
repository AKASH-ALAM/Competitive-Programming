#include<bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    string s; cin >> s;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            for(int j = i; j < s.length(); j++){
                s[j] = s[j+1];
            }
        }
    }
    
    cout << s << endl;
    return 0;
}