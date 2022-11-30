#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int count = 0;
    char *array = (char*) malloc (sizeof(char ) * n);
    cin >> array;

    for(int i = n - 1; i >= 0; i--){
        if(array[i] % 2 == 0){
            count++;
            count += i;
        }
    }

    cout << count << endl;
    return 0;
}