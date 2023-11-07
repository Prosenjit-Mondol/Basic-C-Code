#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int x1=2,x2=5,y1=2,y2=6;
    float die,rad,area;
    die=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    rad=die/2;
    area=pi*rad*rad;
    printf("Area is =%f",area);
    return 0;
}
