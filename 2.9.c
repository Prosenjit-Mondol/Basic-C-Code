#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
