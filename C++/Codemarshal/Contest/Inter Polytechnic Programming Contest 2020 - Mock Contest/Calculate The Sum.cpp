#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    while (n--)
    {   int count = 0;
        int m, tmp; cin >> m;
        
        while (m--)
        {
            cin >> tmp;
            count += tmp;
        }
        cout << count << "\n";
        
    }
    return 0;
}