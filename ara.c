#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("enter the first array element:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("enter the second array element:");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    for(i=4;i>=0;i--){
        c[i]=a[i]+b[i];
        printf("third array element at index %d is %d\n",i,c[i]);
    }
    return 0;
}
