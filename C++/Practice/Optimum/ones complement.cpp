#include "bits/stdc++.h" //same as <bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++) {
        if( (char) a[i] == '5')
            cout << a[i]<<endl;
        else 
            cout<<"Fail"<<endl;
    }
   /*  char x = '5';
    cout << x  << endl; */
    return 0;
}   