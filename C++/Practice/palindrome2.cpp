
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,chack;
    char A[100];
    cout<<"input number or string for palindrome or not: ";
    cin>>A;
    int len = strlen(A);
    for(i = 0, j = len - 1; i < len; i++,j--){
        if(A[i] == A[j]){
            chack = 0;
        }
        else
        {
            chack = 1;
            break;
        }
    }
    if(chack == 0){
        cout<<"This is palindrome number"<<endl;
    }
    else{
        cout<<"This is not palindrome number"<<endl;
    }
    return 0;
}
