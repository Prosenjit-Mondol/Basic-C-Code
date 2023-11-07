#include<stdio.h>
int main()
{
    int a[]={2,3,45,6,5};
    int *p=a;
    int *q=&a[3];
    printf("q-p=%d\np-q=%d\n",q-p,p-q);
    printf("value=%d\nvalue=%d\nq-p=%d\nvalue=%d",*q,*(q-2),(q-p),(q-4));
}
