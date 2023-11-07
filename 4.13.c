#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of call made:");
    scanf("%d",&n);
    n=250+1.25*n;
    printf("the bill for customer is %d",n);
    return 0;
}
