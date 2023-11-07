#include<stdio.h>
main()
{
    int num=1;
    char c='A';
    int i,j;
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c ",c);
                c++;
            }
            else
            {
                printf("%d ",num);
                num++;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
