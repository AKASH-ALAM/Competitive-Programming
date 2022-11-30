#include<stdio.h>
// this kata is to practice writing user defined function
void add(int n1,int n2)
{
    // addition
    printf("%d + %d = %d\n",n1,n2,n1+n2);
}
void sub(int n1,int n2){
    // subtraction
    printf("%d - %d = %d\n",n1,n2,n1-n2);
}
void mul(int n1,int n2){
    // multiplication
    printf("%d x %d = %d\n",n1,n2,n1*n2);
}
void div(int n1,int n2){
    //division
    if(n2 == 0){
        printf("Can not divided by zero\n");
        return;
    }
    printf("%d / %d = %d\n",n1,n2,n1/n2);
}

int main() {
    int number1,number2,n;
    while(1){
        scanf("%d %d",&number1,&number2);
        if(number1 == 0 && number2 == 0){
            break;
        }
        printf("Enter\n 1 for addition \n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n");
        scanf("%d",&n);
        if(n==1){
            add(number1,number2);
        }
        else if(n==2){
            sub(number1,number2);
        }
        else if(n==3){
            mul(number1,number2);
        }
        else if(n==4){
            div(number1,number2);
        }
        else{
            printf("Unknown Operation");
        }

    }

    return 0;
}

