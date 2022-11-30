#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    char s; 
    int a = 0, d = 0;

    while (n--)
    {
        cin >> s;
        if(s == 'D'){
            d++;
        } else
        {
            a++;
        }
    }
    if(a > d){
        cout << "Anton" << endl;
    } else if(d > a){
        cout << "Danik" << endl;
    }   else {
        cout << "Friendship" << endl;
    }
    
    return 0;
}