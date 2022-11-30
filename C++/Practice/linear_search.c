#include<stdio.h>
void linear_search(int a[],int n,int x){
    int i;int m;
    for(i = 0; i < n; i++){
        if(a[i] == x){
            m = i;
            break;
        }
        m = -1;
    }

    (m >= 0) ? printf("The number of %d is found in the %d index\n",x,m+1) : printf("Not found\n");

}
int main(){
    int n,x,i;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    linear_search(a,n,x);
}
