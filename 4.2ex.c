#include<stdio.h>
int main()
{
    float x;
    int i;
    printf("enter any float num:");
    scanf("%f",&x);
    i=(int)x%100;
    printf("The right most digit of the integer is %d",i);
    return 0;
}
