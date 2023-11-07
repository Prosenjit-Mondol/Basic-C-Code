#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==9999)
        {
            printf("9998\n");
            break;
    }
        else
                printf("%d\n",x-1);
    }
    return 0;
}
