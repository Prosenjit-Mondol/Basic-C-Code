#include<stdio.h>
int main()
{
    int p,d,y;
     printf("Given the purchase price:");
    scanf("%d",&p);
     printf("Given the depreciation:");
    scanf("%d",&d);
     printf("Given the yearly service:");
    scanf("%d",&y);
    printf("SALVAGE=%d",p-(d*y));
    return 0;
}
