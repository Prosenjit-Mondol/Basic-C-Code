#include<stdio.h>
int main()
{
    int t,n,v1[100],v2[100],i,r=0,s=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d%d",&v1[j],&v2[j]);
        }

            if(v1[j]<=10 && r<v2[j]){
                s=j+1;
                r=v2[j];
            }

        printf("%d\n",s);
    }
    return 0;
}
