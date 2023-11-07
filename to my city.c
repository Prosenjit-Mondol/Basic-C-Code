#include<stdio.h>
int main()
{
    int a,b,c,s,i;
    long int t;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>=10 || (a+c)>=10 || (c+b)>=10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
