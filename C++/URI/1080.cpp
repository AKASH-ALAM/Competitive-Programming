#include <iostream>

using namespace std;

int main(){
    int arry[101],n,i,m;
    for(i = 0; i < 100; i++){
        cin>>arry[i];
    }
    n = arry[0];
    for(i = 1; i < 100; i++){
        if(n < arry[i]){
            n = arry[i];
        }
    }
    for(i = 0; i < 100; i++){
        if(n == arry[i]){
            m = i;
//            break;
        }
    }
    cout<<n<<endl<<m+1<<endl;
}
