#include <iostream>
using namespace std; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; 
    for(int i = 1; i <= t; i++){
        int my_p, left_p; cin >> my_p >> left_p; 
        //int op_cl = 9, en_ex = 10, result = 10 + 9;
        if(left_p < my_p) {
            left_p = (my_p - left_p) * 4 + (my_p * 4); // first up and then down.
            cout << "Case " << i << ": " << left_p + 19 << endl;
        } else cout << "Case " << i << ": " << (left_p * 4) + 19 << endl;
    } return 0;
}