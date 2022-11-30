#include <iostream>
#include <algorithm>
#define endl '\n'

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << "Enter your H.C.F size: ";
    int size; cin >> size;

    int *array = (int *) malloc(sizeof(int) * size );
    cout << "Enter element of H.C.F: ";

    for(int i = 0; i < size; i++){
        cin >> array[i];
    } sort(array, array+size);

    int hcf = 0, cnt = 0;
    for(int j = 1; j <= array[0]; j++){
        for(int i = 0; i < size ; i++){
            if(array[i] % j == 0 && j > hcf) {
                cnt++;
                if(cnt == size) {
                    hcf = j;
                    cnt = 0;
                }
            }
            else cnt = 0;
        }
    } cout << "So the H.C.F is : " << hcf << endl;

    return 0;    
}