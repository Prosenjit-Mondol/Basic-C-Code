#include<stdio.h>
int main()
{
    int a[100000],i,j,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        if(a[j]!=a[j+1])
            c++;
    }
    printf("%d\n",c+1);
    return 0;
}
