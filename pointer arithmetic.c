#include<stdio.h>
int main()
{
    int a[5]={9,8,7,6,5};
    int *p=&a[0];
    printf("value is %d\naddress of element is:%u\n next value is%d\n",*p,p,*(p+1));
    printf("next address %d",p+1);
}
