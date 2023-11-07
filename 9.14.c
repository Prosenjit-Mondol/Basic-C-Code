#include<stdio.h>
int addnumber(int n)
{
    if(n>1)
    {
        return n+addnumber(n-1);
    }
    else
        return 1;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("Sum= %d\n",addnumber(num));
    return 0;
}
