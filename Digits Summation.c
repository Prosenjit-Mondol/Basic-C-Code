#include<stdio.h>
int main()
{
    long long int i,y,s=0;
    scanf("%lld",&y);
    for(i=1;i<=y;i++)
            s=s+i;
    printf("%lld\n",s);
    return 0;
}
