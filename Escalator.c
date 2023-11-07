#include<stdio.h>
int main()
{
    long long int h;
    int t,n,m,k,v[1000000];
    int i,j,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%lld",&n,&m,&k,&h);
        for(j=0;j<n;j++){
            scanf("%d",&v[j]);
            if(v[j]>h)
              c++;
        }
        printf("%d",v);
    }
    return 0;
}
