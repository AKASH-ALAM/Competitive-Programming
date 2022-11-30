#include <stdio.h>

struct student {
    char name[30];
    int roll;
    double gpa;
};

int main(){
    char b[10];
    
    student a;
    scanf("%[^\n]s", a.name);
    scanf("%d", &a.roll);
    scanf("%lf", &a.gpa);

    printf("%s\n", a.name);
    printf("%d\n", a.roll);
    printf("%lf\n", a.gpa);
    return 0;
}