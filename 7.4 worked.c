#include<stdio.h>
int main()
{
    int num1=0,num2=1,n,i,fib;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fib=num1+num2;
        num1=num2;
        num2=fib;
    }
    printf("\n nth fibonacci number for( n =%d ) = %d\n",n,fib);
    return 0;
}
