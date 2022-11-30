#include <iostream> 
#include <string>
#include <string.h>
using namespace std;
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; char s[20];
    cin >> n >> s;
    int k = strlen(s), result = 1;
    int mod = n % k;
    if(n % k == 0){
        for(int i = n; i >= k; i -= k) result *= i;
        cout << result << endl;
    } else {
        for(int i = n; i >= mod; i -= k) result *= i;
        cout << result << endl;
    }
    return 0;
}