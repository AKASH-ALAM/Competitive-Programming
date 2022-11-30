/* #include <stdio.h>
#define size 5

int main(){
    int arry[size];
    int i,flag = 1;
    for(i = 0; i < size; i++){
        if(flag){
            scanf("%d",&arry[i]);
            if(i == size - 1){
                flag = 0; i = 0;
            }
        }
        if(flag == 0){
            printf("%d\n",arry[i]);
        }
    }
}
 */

 #include <stdio.h>  
 int main()   
 {  
     int n, i;  
     for(n = 1; n <= 20; n = n + 1) {  
         for(i = 1; i <= 10; i = i + 1) {  
             printf("%d X %d = %d\n", n, i, n*i);  
         }
         printf("\n");      
     }  
     return 0;  
 }  