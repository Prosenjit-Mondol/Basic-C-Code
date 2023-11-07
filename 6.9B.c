#include<stdio.h>
int main()
{
    int y;
    float x;
    scanf("%f",&x);
    (x>0?(y=1):(x==0)?(y=0):(y=-1));
    printf("The value of y for given value of x=%f is %d\n",x,y);
    return 0;
}
