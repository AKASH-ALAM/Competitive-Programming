#include <iostream>
using namespace std;

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;
    int tmp, sum = 0;
    while (n--)
    {
        cin >> tmp;
        if(tmp > h){
            sum = sum + 2;
        } else {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}