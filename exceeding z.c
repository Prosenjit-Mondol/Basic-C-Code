#include<stdio.h>
int main()
{
    int x,z,count=0;
    scanf("%d%d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
        count++;
    }
    printf("%d\n",count+x);
    return 0;
}
