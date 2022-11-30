#include <iostream>
#include <string.h>
typedef struct contact con;

struct contact{
    char name[40];
    int number;
};

int main(){
    int n; scanf("%d", &n);
    int t = n;

    con array[n];

    for(int i = 0; i < n; i++){
        scanf("%s", array[i].name);
        scanf("%d", &array[i].number);
    }

    //Terminated due to timeout :(

    char name[40];
    bool flag = true;
    while(t--){
        scanf("%s", name);
        for(int i = 0; i < n; i++){
            if(strcmp(name, array[i].name) == 0){
                printf("%s=%d\n", array[i].name, array[i].number);
                flag = false;
                break;
            } else {
                flag = true;
            }
        }
        if(flag){
            printf("Not found\n");
        }
    }
    return 0;
}
