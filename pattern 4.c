#include<stdio.h>
int main()
{
    int i,j,n,k,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1 || i==0)
                c=1;
            else

            printf(" 1");
        }
        printf("\n");
    }
    return 0;
}
