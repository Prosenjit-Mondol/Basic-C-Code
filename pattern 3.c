#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf(" 1");
            else
                printf(" 0");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf(" 1");
            else
                printf(" 0");
        }
        printf("\n");
    }
    return 0;
}
