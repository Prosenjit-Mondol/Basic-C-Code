#include<stdio.h>
int main()
{
    int n,j,i,v=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            printf("%d ",v);
            v++;
        }
        printf("PUM\n");
        v++;
    }
    return 0;
}
