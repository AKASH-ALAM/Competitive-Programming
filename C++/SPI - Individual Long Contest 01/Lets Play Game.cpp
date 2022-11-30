#include <iostream> 
using namespace std;
int main(){
    int n, m, i = 0, find = 0;
    scanf("%d%d", &n, &m);
    while(1){
        if(n == m){
            find = i;
        }
        i++; 
        if(m % 2 == 0){
            m = m / 2;
        } else { 
           m = m / 3;
        }
    }
}