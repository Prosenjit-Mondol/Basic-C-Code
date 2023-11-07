#include<stdio.h>
int main()
{
    long long int x,y,fx=1,fy=1;
    int i;
    scanf("%lld%lld",&x,&y);
        for(i=1;i<=x;i++)
            fx=fx*i;
        for(i=1;i<=y;i++)
            fy=fy*i;
        printf("%lld\n",fx+fy);
    return 0;
}
