#include <iostream> 
using namespace std;
int main(){
    int arry[] = {1,2,4,3,5};
    for(int i = 0; i < 5; i++){
        printf("%d\n",*(arry+i));
    }
    return 0;
}