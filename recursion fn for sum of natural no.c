#include<stdio.h>
int main()
{
    int number ,result;
    printf("Enter a positive number:\n");
    scanf("%d",&number);
    result=sum(number);
    printf("sum= %d\n",result);
    return 0;
}
int sum(int x)
{
    if(x!=0)
        return x+sum(x-1);
    else
        return x;
}
