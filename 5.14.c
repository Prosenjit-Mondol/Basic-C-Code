#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<=13;i++){
        for(j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
