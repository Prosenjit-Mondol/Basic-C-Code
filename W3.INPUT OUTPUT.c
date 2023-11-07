#include<stdio.h>
int main()
{
    double r,v;
    printf("The radius of the sphere:");
    scanf("%lf",&r);
    v=(4/3)*3.141567*(r*r*r);
    printf("The volume of the sphere is %lf",v);
    return 0;
}
