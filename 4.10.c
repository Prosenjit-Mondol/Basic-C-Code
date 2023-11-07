#include<stdio.h>
int main()
{
    int z,a,b,c;
    printf("Enter three num:");
    scanf("%d%d%d",&a,&b,&c);
    z=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
    printf("The large number is %d",z);
    return 0;
}
