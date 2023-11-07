#include<stdio.h>
int main()
{
    int fact,num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    findfact(num,&fact);
    printf("The factorial of %d is : %d",num,fact);
    return 0;
}
int findfact(int n,int *f)
{
    int i;
    *f=1;
    for(i=1;i<=n;i++)
        *f=*f*i;
    return *f;
}
