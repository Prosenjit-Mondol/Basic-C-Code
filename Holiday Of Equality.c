#include<stdio.h>
int main()
{
    int max,n,i,j,sum=0,a[1000];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1){
        printf("0\n");
        return 0;
    }
    for(int s=0;s<n;s++)
    {
        for(int t=s+1;t<n;t++)
        {
            if(a[s]>a[t]){
            int temp=a[s];
            a[s]=a[t];
            a[t]=temp;
            }
        }
    }
    max=a[n-1];
    for(j=0;j<n;j++)
    {
        sum+=(max-a[j]);
    }
    printf("%d\n",sum);
    return 0;
}
