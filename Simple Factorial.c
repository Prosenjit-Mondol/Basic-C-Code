#include<stdio.h>
int main()
{
    int i,s=1,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        s=s*i;
    }
    printf("%d\n",s);
    return 0;
}
