#include<stdio.h>
int main()
{
    int a=10,*p=&a,**q=&p,***r=&q;
    printf("%d\t%d\t%d\t%d\n",a,*p,**q,***r);
    printf("address of q=%x\t%d\n",&q,r);
    printf("address of p=%x\t%d\n",&p,q);
}
