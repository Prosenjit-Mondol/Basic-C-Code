#include<stdio.h>
int main()
{
    long int j,sum=0,n,h,a[2000];
    scanf("%ld%ld",&n,&h);
    for(j=0;j<n;j++)
    {
        scanf("%ld",&a[j]);
        if(a[j]>h)
        {
            sum+=2;
        }
        else
            sum+=1;
    }
    printf("%ld\n",sum);
    return 0;
}
