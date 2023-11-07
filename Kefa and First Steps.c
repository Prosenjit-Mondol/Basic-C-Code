#include<stdio.h>
int main()
{
    long long int n;
    int i,j,max=0,c=1,a[100000];
    scanf("%lld",&n);
    if(n==1){
       printf("1");
       return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        if(a[j]<=a[j+1])
        {
            c++;
        }
        else
            c=1;
        if(c>max)
        {
            max=c;
        }
    }
    printf("%d\n",max);
    return 0;
}
