#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter four digit integer:");
    scanf("%d",&n);
    for(i=n;i>=1;i/=10){
        s=s+i%10;
    }
    printf("The sum of it's digits is %d",s);
    return 0;
}
