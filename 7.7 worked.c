#include<stdio.h>
int main()
{

    int num,i,y,j,x=40;
    printf("\n Enter a number for \n generate the pyramid:\n");
    scanf("%d",&num);
    for(y=0;y<=num;y++)
    {
        //goto xy(x,y+1);
        for(i=0-y;i<=y;i++)
        {
            printf(" %3d",abs(i));
            //x=x-3;
        }
        printf("\n");
    }
    return 0;
}
