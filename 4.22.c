#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("Input the values of type variable:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=(a+b)*c/d;
    printf("The resultant is %d",x);
    return 0;
}
