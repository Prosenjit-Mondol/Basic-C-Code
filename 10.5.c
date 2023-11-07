#include<stdio.h>
int fibonacci(int n)
{
    if(n<=0)
    {
        printf("Please enter a positive number.");
        return -1;
    }
    int a=1,b=1;
    printf("%d\t%d\t",a,b);
    for(int i=2;i<n;i++)
    {
        int next=a+b;
        printf("%d\t",next);
        a=b;
        b=next;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
