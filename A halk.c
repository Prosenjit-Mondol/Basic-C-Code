#include<stdio.h>
int main()
{
    int i,j,n;
    char a[10]="I hate",b[10]="I love";
    scanf("%d",&n);
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1)
                printf("%s",a);
            else if(j%2==0)
                printf(" that %s",b);
            else
                printf(" that %s",a);

        }
        printf(" it\n");
    }
    return 0;
}
