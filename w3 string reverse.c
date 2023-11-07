#include<stdio.h>
int main()
{
    int k,i,j,p=1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=1;k<(n-i);k++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            if(i==0|| j==0)
            {
                p=1;
            }
            else
            {
                p=p*(i-j+1)/j;
            }
            printf(" %d",p);
        }
        printf("\n");
    }
    return 0;
}
