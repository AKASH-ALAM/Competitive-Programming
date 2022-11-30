#include <bits/stdc++.h>
using namespace std;

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */

    int n; cin >> n;
    char s[n]; cin >> s;

    int count = 0;

    for(int i = 0; i < n; i++){
        if((s[i] == 'R' && s[i+1] == 'R') || (s[i] == 'G' && s[i+1] == 'G') || (s[i] == 'B' && s[i+1] == 'B')){
            count++;
        }
    } cout << count << endl;

    return 0; 
}