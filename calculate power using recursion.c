#include<stdio.h>
int power(int n1,int n2)
{
    if(n2!=0)
    {
        return (n1*power(n1,n2-1));
    }
    else
        return 1;
}
int main()
{
    int n1,n2,result;
    printf("Enter base number: ");
    scanf("%d", &n1);
    printf("Enter power number(positive integer): ");
    scanf("%d", &n2);
    result = power(n1,n2);
    printf("%d^%d = %d", n1, n2, result);
    return 0;
}
