#include<stdio.h>
#define maxgirl 4
#define maxitem 3
int main()
{
    int value[maxgirl][maxitem],girl[maxgirl],item[maxitem],i,j,total=0;
    printf("Input data\nEnter valus , at a time,row-wise\n");
    for(i=0;i<maxgirl;i++)
    {
        girl[i]=0;
        for(j=0;j<maxitem;j++)
        {
            scanf("%d",&value[i][j]);
            girl[i]=girl[i]+value[i][j];
        }
    }
    for(i=0;i<maxitem;i++)
    {
        item[i]=0;
        for(j=0;j<maxitem;j++)
        {
            item[i]=item[i]+value[i][j];
        }
    }
     for(i=0;i<maxgirl;i++)
        total=total+girl[i];
     printf("\n Girls Total\n");
     for(i=0;i<maxgirl;i++)
     {
         printf("Salesgirls[%d] = %d\n",i+1,girl[i]);
     }
     printf("\n Items Total\n");
     for(i=0;i<maxitem;i++)
     {
         printf("Item[%d] = %d\n",i+1,item[i]);
     }
     printf("\n Grand total = %d",total);
     return 0;
}
