#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d",&x);
    printf("year is %d\n",x/365);
    a=x%365;
    printf("month is %d\n",a/30);
    a=a%30;
    printf("days is %d\n",a);
    return 0;
}
