#include<stdio.h>
int main()
{
    int n,p,pp[1000],q,qq[1000],i,j,k=0,m=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&pp[i]);
        if(pp[i]==1)
            k=1;
        if(pp[i]==n)
            m=1;
    }
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
        scanf("%d",&qq[i]);
        if(qq[i]==1)
            k=1;
        if(qq[i]==n)
            m=1;
    }
    if(m==1 && k==1)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
