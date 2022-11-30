/* #include <stdio.h>
 */
#include <cstdio>
#include <iostream> 

using namespace std;
int main(){
    int x, y;
    while(cin >> x >> y){
        if(y % x != 0){
            int get = y / x;
            get++;
            get = get * x;
            get = get - y;
            printf("%d\n", get);
        } else {
            printf("0\n");
        }
    }
    return 0;
}