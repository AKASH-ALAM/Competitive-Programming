#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t; cin >> s >> t;

    int count = 1; 
    for(int i = 0, j = 0; t[i] != '\0'; i++){
        if(s[j] == t[i]){
            count++;
            j++;
        }
    } cout << count << "\n";

    return 0;
}