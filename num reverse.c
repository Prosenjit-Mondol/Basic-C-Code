#include<stdio.h>
int main()
{
    int x,i,j,a=0;
    scanf("%d",&x);
    i=x;
    while(i>1){
        j=i%10;
        a=(10*a)+j;
        i/=10;
    }
    printf("%d\n",a);
    return 0;
}
