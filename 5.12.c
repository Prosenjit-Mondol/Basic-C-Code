#include<stdio.h>
int main()
{
    int row,col,n,i;
    printf("Enter the number of pascal's tringle:\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        printf("*");
        printf("\n");
    }
    return 0;
}
