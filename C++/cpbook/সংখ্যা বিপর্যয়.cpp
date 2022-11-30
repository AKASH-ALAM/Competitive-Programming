/* #include <iostream>
#define endl '\n'

using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    while(t--){
        long n; cin>>n;
        int remainder;
        while(n != 0){
            remainder = n % 10;
            cout<<remainder;
            n = n / 10;
        }cout<<endl;
    }
    return 0;
}
 */
//Another way

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        char s[10];   cin>>s;
        int len = strlen(s) - 1;
        for(int i = len; i >= 0; i--) cout<<s[i];
        cout<<endl;
    }
    return 0;
}

//Another way

/* #include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long n, rev = 0; cin>>n;
        while(n != 0){
            rev = rev * 10;
            rev = rev + (n % 10);
            n = n / 10;
        } cout<<rev<<endl;
    }
    return 0;
} */