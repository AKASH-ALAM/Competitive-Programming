#include<stdio.h>
#include<string.h>
// this kata is to practice writing user defined function
int add(int n1,int n2)
{
   return n1 + n2;
}
int sub(int n1,int n2){
    return n1 - n2;
}
int mul(int n1,int n2){
   return n1 * n2;
}
int div(int n1,int n2){
   return n1 / n2;
}

int main() {
    int number1,number2,result;
    char operation[10];

    while(1){
        printf("Enter two number (or two 0s to exit):");
        scanf("%d %d",&number1,&number2);
        if(number1 == 0 && number2 == 0){
            printf("Program Terminated.\n");
            break;
        }
        printf("Enter any of the following commend\n\tadd for addition\n\tsub for Subtraction\n\tmul for Multiplication\n\tdiv for Division\n\t: ");
        scanf("%s",operation);
        if(!strcmp(operation,"add")){
            result = add(number1,number2);
        }
        else if(!strcmp(operation,"sub")){
           result = sub(number1,number2);
        }
        else if(!strcmp(operation,"mul")){
           result = mul(number1,number2);
        }
        else if(!strcmp(operation,"div")){
            if(number2 == 0){
        printf("Can not divided by zero\n");
        continue;
            }
            result = div(number1,number2);
        }
        else{
            printf("Unknown Operation\n");
            continue;
        }
        printf("Result is: %d\n",result);
    }

    return 0;
}

