#include <stdio.h>
#include <string.h>

float add(float n1,float n2){
    return n1 + n2;
}
float sub(float n1,float n2){
    return n1 - n2;
}
float mul(float n1,float n2){
    return n1 * n2;
}
float div(float n1,float n2){
    return n1 / n2;
}

int main()
{
    float n1,n2,result;
    char selector[10];
    char start[5];
     while(1)
     {
         printf("Enter 'Exit' To  Exit Or Enter 'No' To Continue\n");
         scanf("%s", start);
        if (!strcmp(start, "Exit"))
        {
            printf("Program Terminated\n");
            break;
        }
        else if (!strcmp(start, "No"))
        {
            printf("Enter Two Numbers\n");
            scanf("%f %f",&n1,&n2);
            printf("Enter any of following command\n\n\tadd for Addition\n\tsub for   Subtraction\n\tmul for Multiplication\n\tdiv for Division\n ");
            scanf("%s", selector);

            if(!strcmp(selector,"add")){
            result = add(n1,n2);
            }
            else if(!strcmp(selector,"sub")){
                result = sub(n1,n2);
            }
            else if(!strcmp(selector,"mul")){
                result = mul(n1,n2);
            }
            else if(!strcmp(selector,"div")){
                if(n2==0.0){
                    printf("Can not divided by Zero\n");
                    continue;
                }
                result = div(n1,n2);
            }
            else{
                printf("Unknown Command\n");
                continue;
            }
        printf("The Result is %.2f\n\n",result);
        }
        else
        {
            printf("Unknown Command\n");
        }
    }
    return 0;
}
