#include <bits/stdc++.h>
using namespace std;

void printF(int index, int size, vector <int> &sub_sqnc, int a[]){
    if(index == size){
        if(sub_sqnc.empty()) cout << "{ }" << endl;
        else {
            for(auto it : sub_sqnc)    cout << it << " ";
            cout << endl;
        }
        return;
    }
    sub_sqnc.push_back(a[index]);
    printF(index+1, size, sub_sqnc, a);
    sub_sqnc.pop_back();
    printF(index+1, size, sub_sqnc, a);
}

int main(){
    int a[] = {3, 1, 2, 4};
    vector <int> empty;
    printF(0, sizeof(a) / sizeof(a[0]), empty, a);
    return 0;
}