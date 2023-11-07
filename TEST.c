#include<stdio.h>
int main()
{
    int t,u;
    scanf("%d",&t);
    for(u=0;u<t;u++)
    {
    int count=0,k,l,i,j,n,a[1000];
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[j]>a[k])
            {
                int o=a[j];
                a[j]=a[k];
                a[k]=o;
            }
        }
    }
   int temp=a[n-1];
   for(int w=0;w<n;w++)
        {
            if(a[w]==temp)
            count++;
        }
        if(count==n){
            printf("-1");
            printf("\n");
        }
            else{
                printf("%d %d\n",n-count,count);
                for(k=0;k<n;k++)
                {
                    if(temp==a[k]){
                      continue;
                    }
                   else{
                      printf("%d ",a[k]);
                     }
                }
                printf("\n");
                for(l=0;l<n;l++)
                {
                   if(temp==a[l]){
                     printf("%d ",a[l]);
                   }
                 }
                printf("\n");
            }
    }
    return 0;
}
