#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, col;
    cin>>row>>col;
    int stick = row + col;
    if(row == 1 || col == 1){
        cout<<"Akshat"<<endl;
        return 0;
    }
    /* int akshat = 1, malvika = 1;
    while( !(stick < 2) ){
        if(akshat){
            stick = stick - 2;
            akshat = 0;
            malvika = 1;
        }
        else{
            stick = stick - 2;
            malvika = 0;
            akshat = 1;

        }
    }
    if(akshat) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl; */
    if(row > col) swap(row, col);

    if(row & 1) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
    return 0;
}
