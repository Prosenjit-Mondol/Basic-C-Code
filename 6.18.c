#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number a & b:");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("a is greater than b");
    else if(x<y)
      printf("b is greater than a");
    else
        printf("a and b are equal");
    return 0;
}
