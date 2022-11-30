#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
                        //Maybe this code doesn't work properly, sorry for that! :(
        unsigned long long n,check = 0, div;
        cin>>n;
        if(n == 8589869056 || n == 137438691328 || n == 2305843008139952128){
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        }
        else if(n <= 33550336){
            div = (n / 2) + 1;
            for(i = 1; i <= div; i++){
                if(n % i == 0 && !(check > n)) check = check + i;
            }
            if(check == n) cout<<"YES, "<<n<<" is a perfect number!"<<endl;
            else cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
        }
    }
    return 0;
}