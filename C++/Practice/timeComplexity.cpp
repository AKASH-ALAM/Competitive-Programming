//big O notation O();
//You can read this: Order of 1;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,c=0;
    cin>>n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            c++;
            //Order of (n^2);
        }
    }
    cout<<"n is "<<n<<" "<<"count is: "<<c<<endl;
}
