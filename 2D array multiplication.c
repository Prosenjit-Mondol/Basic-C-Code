#include<stdio.h>
#define N 50
int main()
{
    int i,j,a[N][N],b[N][N],c[N][N],m,n,p,q,k,sum;

    while(1)
    {
        printf("enter 1st array row and coloum:\n");
    scanf("%d%d",&m,&n);
    printf("enter 1st array element:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 2nd array row and coloum:\n");
    scanf("%d%d",&p,&q);
    printf("enter 2nd array element:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n1st array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n2nd array is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
        printf("multiplication is not possible\n");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("multiplication array is\n");

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

    }

    return 0;
}
