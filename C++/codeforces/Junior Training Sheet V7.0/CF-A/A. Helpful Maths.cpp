#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    string s; cin >> s;
    int len = s.length();
    int a_len = (len / 2) + 1;
    int array[101];
    for(int i = 0, j = 0; i < len; i++){
        if(s[i] != '+'){
            array[j] = s[i] - 48;
            j++;
        }
    }
    sort(array, array+a_len);
    for(int i = 0; i < a_len; i++){
        cout << array[i];
        if(i < a_len-1) cout << "+";
    }
    cout << endl;
}