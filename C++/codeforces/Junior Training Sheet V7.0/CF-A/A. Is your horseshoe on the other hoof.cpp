#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int array[4]; for(int i = 0 ; i < 4; i++) cin >> array[i];
    int count = 0;
    sort(array, array+4);
    if(array[0] == array[3]) {
        cout << 3 << endl;
        return 0;
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(array[i] == array[j]){
                count++;
                if(count == 3){
                    count--;
                }
            } 
        }
    } cout << count << endl;
    return 0;
}