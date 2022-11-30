#include <bits/stdc++.h>
#define size 3
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int a[n], child[size] = {0}; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) child[0]++;
        else if(a[i] == 2) child[1]++;
        else child[2]++;
    } 
    sort(child, child+size);
    int w = child[0];
    if(w == 0) {
        cout << 0 << "\n";
        return 0;
    }
    cout << w << endl;
    while(w--){
        int one = 0, two = 0, three = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1 && one == 0){
                a[i] = 0;
                one = i+1;
            } else if(a[i] == 2 && two == 0){
                a[i] = 0;
                two = i+1;
            } else if(a[i] == 3 && three == 0){
                a[i] = 0;
                three = i+1;
            }
        } cout << one << " " << two << " " << three << "\n";
    }

    return 0;
    
}