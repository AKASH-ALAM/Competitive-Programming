#include<stdio.h>
int main(){
    int hour,member,time,eachday = 0,i,result;
    while(2 == scanf("%d%d",&hour,&member)){
        for(i = 0; i < member; i++){
            scanf("%d",&time);
            eachday = eachday + time;
        }
        if(hour % eachday == 0){
            result = hour / eachday;
        }
        else{
            result = 1 + (hour / eachday);
        }
        if (result == 1){
            printf("Project will finish within %d day.\n",result);
        }
        else{
            printf("Project will finish within %d days.\n",result);
        }
        eachday = 0;
    }
}
