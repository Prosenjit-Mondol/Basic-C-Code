/*#include<stdio.h>
int main()
{
    int i,j,n,a[1000],b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

{*/
    #include<stdio.h>
main()
{
    int i,j,k,x,m;
    scanf("%d",&x);
    int y[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
        for(m=0;m<x;m++)
           {
                for(j=m+1;j<x;j++)
               {
                   if(y[j]<=y[m])
                    {k=y[m];
                   y[m]=y[j];
                   y[j]=k;}
               }
printf("%d ",y[m]);
            }

}
