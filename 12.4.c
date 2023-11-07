#include<stdio.h>
int main()
{
    int *p,sum,i;
    int x[5]={1,2,3,4,5};
    i=0;
    p=x;
    //printf("")
    for(i=0;i<5;i++)
    {
        printf("x[%d] %d %d\n",i,*p,p);
        p++;
    }
}
