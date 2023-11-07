#include<stdio.h>
int main()
{
    int n,m,*p1=&n,*p2=&m;
    printf("Enter the first number:\n");
    scanf("%d",p1);
    printf("Enter the second number:\n");
    scanf("%d",p2);
    if(*p1>*p2)
        printf("\n\n%d is the maximum number.",*p1);
    else
     printf("\n\n%d is the maximum number.",*p2);
    return 0;
}
