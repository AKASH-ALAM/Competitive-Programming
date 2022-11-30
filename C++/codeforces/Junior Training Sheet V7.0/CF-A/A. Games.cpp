#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n;  cin >> n;
    int a1[n], a2[n], i = 0, count = 0;
    for(int i = 0; i < n; i++){
        cin >> a1[i] >> a2[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a2[i] == a1[j]) count++;
        }
    } cout << count << endl;

    return 0;
}