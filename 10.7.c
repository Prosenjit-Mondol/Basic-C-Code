#include<stdio.h>
int prime(int num)
{
    int a=num,flag=0;
    if(a==2)
    {
        return 0;
    }
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            return 0;
            break;
        }
    }
    if(flag==0)
        return 1;
}
int main()
{
    int r,x;
    scanf("%d",&x);
    r=prime(x);
    printf("%d\n",r);
    return 0;
}
