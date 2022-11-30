#include <iostream>
#include <string.h>
using namespace std;
#define size 51

int isSame(char s[], int n){
    int i, red = 0, green = 0, blue = 0;
    for(i = 0; i < n; i++){
        if(s[i] == 'R'){
            red++;
            if(red == n) return red;
        }
        else if(s[i] == 'G'){
            green++;
            if(green == n) return green;
        }
        else if(s[i] == 'B'){
            blue++;
            if(blue == n) return blue;
        }
    } 
    return 0;
}
int main(){
    char s[size];
    int i, n, temp = 0, found = 0;
    cin>>n;
    for(i = 0; i < n; i++) cin>>s[i];
    if(isSame(s,n)) cout<<n - 1<<endl;

    else{
        for(i = 0; i < n; i++){
            if(s[i] == s[i + 1]){
                found++;
            }
        }
        cout<<found<<endl;
    }
    return 0;
}