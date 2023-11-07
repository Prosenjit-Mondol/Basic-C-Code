#include<stdio.h>
int main()
{
    long long int n,a,b,c,d;
    int i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(a>b && a>c && a>d)
            printf("0\n");
        else if((a>b && a>c && a<d) || (a>b && a>d && a<c) || (a>d && a>c && a<b))
            printf("1\n");
        else if(a<b && a<c && a<d)
            printf("3\n");
        else if((a>b && a<c && a<d) || (a>c && a<d && a<b) || (a>d && a<c && a<b))
            printf("2\n");
    }
    return 0;
}
