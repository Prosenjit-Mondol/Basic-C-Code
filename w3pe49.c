#include<stdio.h>
int main()
{
    int n,val[7],x,i;
    printf("Input the first number of the array:");
    scanf("%d",&x);
    n=x;
    for(i=1;i<=n;i++){
        printf("n[%d] = %d\n",i,x);
        x=x*3;
    }
    return 0;
}
