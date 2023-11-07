#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,a[100],c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n;j++)
        {
            for(int m=j+1;m<n;m++)
            {
                if(a[j]>a[m])
                {
                    int v=a[j];
                    a[j]=a[m];
                    a[m]=v;
                }
            }
        }
        for(int x=0;x<n-1;x++)
        {
            int d=a[x+1]-a[x];
            if(d>1)
            {
                c=1;
                break;
            }
            else
                continue;
        }
        if(c==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
