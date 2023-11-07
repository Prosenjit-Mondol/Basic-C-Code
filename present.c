#include<stdio.h>
main()
{
    int i,j,k,z;
    scanf("%d",&j);
    int x[j],y[j];
    for(i=0;i<j;i++)

    {
        scanf("%d",&x[i]);
        z=x[i];
        y[z-1]=i+1;

    }
       for(k=0;k<j;k++)

    {
    printf("%d ",y[k]);
    }
}
