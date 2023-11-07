#include<stdio.h>
int main()
{
    int x,y,a,b;
    printf("Enter two digit integer num:");
    scanf("%d%d",&x,&y);
    a=y%10;
    b=y/10;
    printf("           %d\n",x);
    printf("         * %d\n",y);
    printf("          _________\n");
    printf("%dX%d is   %d\n",a,y,(a*y));
    printf("%dX%d is   %d\n",b,y,(b*y));
    printf("          __________\n");
    printf("Add them   %d\n",(x*y));
    return 0;
}
