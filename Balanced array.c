#include<stdio.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n,s=0,so=0;
        int odd[1000],even[1000];
        scanf("%ld",&n);
        int v=n/2;
        if(v%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int k=0;
            for(int i=2;i<=n;i+=2)
            {
                printf("%d ",i);
                s+=i;
            }
            for(int m=1;m<n-2;m+=2)
            {
                printf("%d ",m);
                so+=m;
            }
            printf("%d\n",s-so);
        }
    }
    return 0;
}
