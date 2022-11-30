#include <bits/stdc++.h>
#define endl '\n'
#define first_io ios_base::sync_with_stdio(false), cin.tie(NULL);
using namespace std;
int main(){
    first_io;
    int array[3];
    while (cin >> array[0] >> array[1] >> array[2])
    {
        if(array[0] == 0 && array[1] == 0 && array[2] == 0) break;
        sort(array, array+3);
        int ac = pow(array[0], 2) + pow(array[1], 2);
        ac = sqrt(ac);
        if(ac == array[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    
    return 0;
}

