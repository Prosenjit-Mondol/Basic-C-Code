#include<stdio.h>
int main()
{
    long int x,a;
    scanf("%ld",&x);
    printf("%ld years\n",x/365);
    a=x%365;
    printf("%ld months\n",a/30);
    a=a%30;
    printf("%ld days\n",a);
    return 0;
}

