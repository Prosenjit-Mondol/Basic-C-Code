#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,x,y,z;
    a=12;
    b=4;
    p2 = &b;
    p1 = &a;
    int c=*p1;
    *p1=20;
    x=4* - *p2 / *p1 +10;
    printf("%d\n%x\n%d\n%u\n%d\n%d\n%u\n",x,p1,*p2,p2,c,a,p1);
}
