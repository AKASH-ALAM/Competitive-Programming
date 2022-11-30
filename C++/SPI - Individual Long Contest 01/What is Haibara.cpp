#include <iostream> 
#include <stdlib.h>
using namespace std;

int main(){
    int t; scanf("%d", &t);
    
    while(t--){
        int n, x, y, i = 0, tmp = 1;
        int index;
        scanf("%d%d%d", &n, &x, &y);
        int xx = x, yy = y;
        int size = n;

        int *distance = (int *) malloc (sizeof(int) * size);
        int *amount = (int *) malloc (sizeof(int) * size);

        int find[2][size];


        while(n--){
            
            int tmpx, tmpy;
            scanf("%d%d", &distance[i], &amount[i]);
            int j = i;
            i++;

            if(distance[j] <= x && amount[j] >= y){
                index = i;
                tmpx = distance[j], tmpy = amount[j];
                x = distance[j], y = amount[j];
            } else if(distance[j] < tmpx && amount[j] < tmpy && amount[j] >= yy){
                index = i;
                tmpx = distance[j], tmpy = amount[j];
                x = distance[j], y = amount[j];
            }
        }
        
        if(index){
            printf("%d\n", index);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}

