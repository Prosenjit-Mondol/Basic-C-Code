#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(int jj=1;jj<=n-i;jj++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",i+k);
            k++;
        }
        for(int m=i;m>1;m--)
        {
            printf(" %d",m+k-2);
        }
        printf("\n");
    }
    return 0;
}
