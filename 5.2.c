#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    printf("the value of x+y/x-y is %f\n",(x+y)/(x-y));
    printf("the value of x+y/2 is %f\n",(x+y)/2);
    printf("the value of (x+y)(x-y) is %f\n",(x+y)*(x-y));
    return 0;
}
