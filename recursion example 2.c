#include<stdio.h>
main()
{
    int a=10;
    printf("%d",sum(a));

}
int sum(int x)
{
    int s=0;
    if(x==1)
        return 1;
    s=x+sum(x-1);
    return s;
}
