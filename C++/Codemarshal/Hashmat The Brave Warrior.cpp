/* #include <iostream>
#define endl '\n'
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned long long a, b, tem;
    while(scanf("%lld %lld",&a,&b) != EOF){
        if(a > b){
            tem = a;
            a = b;
            b = tem;
        }
        printf("%lld\n",b-a);
    }
    return 0;
}
 */

#include <iostream>
#define endl '\n'

using namespace std;
int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long a, b, tem;
    while(cin>>a>>b){
                        
        if(a > b){
            tem = a;
            a = b;
            b = tem;
        }
        cout<<b-a<<endl;
    }
    return 0;
}
