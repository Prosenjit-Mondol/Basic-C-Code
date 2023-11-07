#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int o1=0,o2=4,x1=0,x2=5;
    float area,rad,circum;
    rad=sqrt((x1-o1)*(x1-o1)+(x2-o2)*(x2-o2));
    circum=2*pi*rad;
    area=pi*rad*rad;
    printf("Circumference is =%f\nArea is =%f\n",circum,area);
    return 0;
}
