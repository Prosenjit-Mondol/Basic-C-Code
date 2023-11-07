#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
    int row=1,col,y;
    printf("       MULTIPLICATION TABLE      \n");
    printf("___________________________________\n");
    do
    {
        col=1;
        do
        {
            y=row*col;
            printf("%4d ",y);
            col=col+1;
        }
        while(col<=COLMAX);
        printf("\n");
        row=row+1;
    }
    while(row<=ROWMAX);
    printf("___________________________________\n");
    return 0;
}
