#include<bits/stdc++.h>
using namespace std;
typedef struct squertRoot{
    int number[100];
    double root[100];
}squertRoot;
int main(){
    int i = 0;
    squertRoot borgomul;
    for(i = 0; i<=100;i++){
        borgomul.number[i]=i;
        borgomul.root[i]=sqrt(i);
    }
    for(i=0;i<=100;i++){
      printf("Square Root of %d is %.2lf\n",borgomul.number[i],borgomul.root[i]);
    }
}
