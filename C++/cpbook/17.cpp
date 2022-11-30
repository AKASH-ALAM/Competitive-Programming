#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    char s[2],ss[2];
    int c,ck;
    cin>>t;
    while(t--){
        int c = 555,ck = 555;
        for(i = 0; i < 2; i++){
            cin>>s[i];
        }
        for(i = 0; i < 2; i++){
            cin>>ss[i];
        }
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                if(ss[j] == s[i]){
                    if(c == 555){
                        c = s[i] - 48;
                    }
                    else{
                        ck = s[i] - 48; 
                    }
                }
            }
        }
        if(c != 555 && ck != 555){
            if(c > ck){
                int d = ck;
                ck = c;
                c = d;
                cout<<c<<ck<<endl;
            }
            else if(c < ck){
                cout<<c<<ck<<endl;
            }
            else if(c == ck){
                cout<<c<<endl;
            }
        }
        else if(c == 555 && ck == 555){
            cout<<"N"<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}
