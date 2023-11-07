#include<stdio.h>
int main()
{
    int i,j,n;
    while(1)
    {
    scanf("%d",&n);
    if(n==0)
        break;
    else
    {
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("%d\t",i+j);
            }
            printf("\n");
        }
    }
    }
    return 0;
}
