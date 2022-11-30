#include <stdio.h>
#include <stdlib.h>
struct mystruct{
    int age;
    float height;
};

int main(int argc, char const *argv[])
{
    struct mystruct * ps;
    ps = (struct mystruct*) malloc(sizeof(struct mystruct));
    ps -> age = 20;
    ps -> height = 5.5;
    printf("%d\n",ps->age);
    printf("%f\n",ps->height);
    free(ps);
    return 0;
}
