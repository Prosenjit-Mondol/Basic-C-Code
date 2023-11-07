#include<stdio.h>
int main()
{
    int a=11,*p=&a,**z=&p;
    printf("a=%d\n%x\n%d\n",**z,p,z);
    int x[]={2,4,5,8,7};
    int *q;
    q=x;
    q++;
    printf("%d\n%d\n",*q++,*q++);
    int u[10]={10,11,-1,56,67,5,4};
    int *g,*h;
    g=u;
    printf("%d\n",*g);
    printf("%d %d %d\n",(*g)++,*g++,*++g);
    printf("%d\n",*g);
    h=g+3;
    printf("%d %d %d",*h-2,*h+*g,*--g+5);
}
