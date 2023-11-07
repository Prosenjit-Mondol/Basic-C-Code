#include<stdio.h>
int main()
{
    int l,c,b,i,j,x,y,d,n,m,p=10000,a[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        for(int k=j+1;k<m;k++)
        {
            if(a[j]>a[k])
            {
                int o=a[j];
                a[j]=a[k];
                a[k]=o;
            }
        }
    }
    l=m-(n-1);
    for(b=0;b<l;b++)
    {
        y=a[b+n-1];
        x=a[b];
        c=y-x;
        if(c<p)
        {
            p=c;
        }
    }
    printf("%d\n",p);
    return 0;
}
