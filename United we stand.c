#include<stdio.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++){
    int l,count=0,n,t,i,j,k,a[1000];

        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n-1;j++)
        {
            for(int x=j+1;x<n;j++)
            {
                if(a[j]>a[x])
                {
                    int x=a[j];
                    a[j]=a[x];
                    a[x]=x;
                }
            }
        }
        t=a[n-1];
        for(int w=0;w<n;w++)
        {
            if(a[w]==t)
            count++;
        }
        if(count==n)
            printf("-1");
        else{
        printf("%d %d\n",n-count,count);
        for(k=0;k<n;k++)
        {
            if(t==a[k])
                continue;
            else
                printf("%d ",a[k]);
        }
        printf("\n");
        for(l=0;l<n;l++)
        {
            if(t==a[l])
                printf("%d ",a[l]);
        }
        printf("\n");
        }
    }
    return 0;
}
