#include<stdio.h>
int main()
{
    long long int v,r,n,a,b;
    int i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        r=a/b;
        v=a-(r*b);
        if(v==0)
            printf("0\n");
        else
           printf("%lld\n",b-v);
    }
    return 0;
}
