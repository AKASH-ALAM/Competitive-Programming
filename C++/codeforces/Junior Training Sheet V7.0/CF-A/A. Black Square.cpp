#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */

    int array[4];
    for(int i = 0; i < 4; i++) cin >> array[i];
    
    int total_calories = 0;
    string s; cin >> s;

    for(int i = 0; s[i] != '\0'; i++){
        int d = s[i] - 48;
        total_calories += array[d-1];
    }
    cout << total_calories << endl;
    
    return 0;
}