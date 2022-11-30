#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Input array size: ";
    int size; cin >> size;
    int arry[size], i = 0, j = 0;
    cout << "Inter array value: ";
    for(i = 0; i < size; i++){
        cin >> arry[i];
    }
    cout << "Your input value is: ";
    for (i = 0; i < size ; i++){
        cout << arry[i] << " ";
    } cout << endl;

    while (size)
    {
        int dl_vl = 0; 
        cout << "Which No value you want to delete: ";
        cin >> dl_vl;
        if(dl_vl > size){
            cout << "Your deleted No is bigger then Array size!"<< endl << "Inter again : ";
            continue;
        }
        j = dl_vl;
        dl_vl--;
        for (i = dl_vl; i < size; i++, j++){
            arry[i] = arry[j];
        } arry[size] = '/0';
        size--;

        if(size == 0){
            cout << "Your Array is empty!"<< endl; break;
        } 
        else{
            cout << "Array value is: ";
        }
        
        for (i = 0; i < size ; i++){
            cout << arry[i] << " ";
        } cout << endl;
    
    } 
    return 0;
}