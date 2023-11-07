#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    //printf("1 ");
    int l,k;
    l:
        if(x>100)
            goto k;
        else
        {
        printf(" %d",x);
        x++;
        goto l;
        }
    k:
    return 0;
}
