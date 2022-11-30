#include <iostream>
#include <math.h>
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  int t, j = 1;
  cin>>t;
    while(j <= t){
        char s[6], ch;
        int deci[6];
        for(int i = 0; i < 6; i++){
            cin>>ch;
            if(ch >= 'A' && ch <= 'F') deci[i] = ch - 55;
            else deci[i] = ch - 48;
        }
        int arry[3], count = 0, k = 0;
        for(int i = 0; i < 6; i++){
            if(i % 2 == 0) count += deci[i] * 16;
            else{ 
                count += deci[i] * 1;
                arry[k] = count;
                count = 0;
                k++;
            }
        }
        //for(int i = 0; i < 3; i++) cout<<arry[i]<<' ';
        cout<<"Case "<<j<<":";
        int A[] = {127,0,0}, B[] = {127,127,0}, C[] = {127,127,127};
        int D[] = {255,0,0}, E[] = {255,127,0}, F[] = {255,127,127};
        int G[] = {255,255,0}, H[] = {255,255,127}, I[] = {255,255,255};

        if(arry[0] <= A[0] && arry[1] <= A[1] && arry[2] <= A[2]) cout<<" A";
        if(arry[0] <= B[0] && arry[1] <= B[1] && arry[2] <= B[2]) cout<<" B";
        if(arry[0] <= C[0] && arry[1] <= C[1] && arry[2] <= C[2]) cout<<" C";
        if(arry[0] <= D[0] && arry[1] <= D[1] && arry[2] <= D[2]) cout<<" D";
        if(arry[0] <= E[0] && arry[1] <= E[1] && arry[2] <= E[2]) cout<<" E";
        if(arry[0] <= F[0] && arry[1] <= F[1] && arry[2] <= F[2]) cout<<" F";
        if(arry[0] <= G[0] && arry[1] <= G[1] && arry[2] <= G[2]) cout<<" G";
        if(arry[0] <= H[0] && arry[1] <= H[1] && arry[2] <= H[2]) cout<<" H";
        if(arry[0] <= I[0] && arry[1] <= I[1] && arry[2] <= I[2]) cout<<" I";
        cout<<endl;
        j++;
    }

  return 0;
}
