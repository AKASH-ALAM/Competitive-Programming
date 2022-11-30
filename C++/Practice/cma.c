#include<stdio.h>
int main(){
    int a,b,c,sm,bg,md;
    scanf("%d%d%d",&a,&b,&c);
    sm = (a<b&&a<c) ? a: (b<a&&b<c) ? b: c;
    bg = (a>b&&a>c) ? a: (b>a&&b>c) ? b: c;
    md = (sm<a&&bg>a) ? a: (sm<b&&bg>b) ? b: c;
    printf("%d %d %d\n",sm,md,bg);

}
