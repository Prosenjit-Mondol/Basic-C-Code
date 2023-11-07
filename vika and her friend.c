#include<stdio.h>
int main()
{
    int i,j,t,n,m,k,x,y,x1[110],y1[110];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        scanf("%d%d",&x,&y);
        for(j=0;j<k;j++);
        {
            scanf("%d%d",&x1[j],&y1[j]);
        }
        if(x>=k && y>=k)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
