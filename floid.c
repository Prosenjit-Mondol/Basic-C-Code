#include<stdio.h>
int main()
{
    int k,i,j;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++){
            (i+j)%2==0?printf("1 "):printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
