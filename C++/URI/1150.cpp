#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,z,c = 0;
    cin>>x>>z;
    while(x >= z)
        cin>>z;
    for(i = x; i < z/2; i++){
        if(x < 0 && z < 0){
            x = (1+i) + x;
             c++;
            if(z < x){
                break;
            }
           
        }
        else{
            x = x + (i+1);
            c++;
            if(z < x){
                break;
            }
            
        }
    }
    cout<<c+1<<endl;
    return 0;
}
