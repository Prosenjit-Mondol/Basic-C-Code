#include<stdio.h>
main()
{
    tail(10);
}
void tail(int a)
{
    if(a<1)
        return;
    else
        printf("%d\n",a);
    tail(a/2);
}
