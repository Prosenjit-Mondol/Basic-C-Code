#include<stdio.h>
int pattern(int x,int y)
{
    if(x==1)
        printf(" %d",y);
    else
    {
        printf(" %d",y);
        pattern(x-1,y+1);
        printf(" %d",y);
    }
}
main()
{
    int i,y;
    int r;
    scanf("%d",&r);
    for( i=1, y=1;i<=r,y<=r;i++,y++)
       {
           for(int j=i;j<=r+1;j++)
            printf("  ");
           pattern(i,y);
           printf("\n");
        }
}
