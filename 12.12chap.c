#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("value=%d\tptr=%p\t*ptr=%d\n",a,ptr,*ptr);
    ptr++;
    printf("value=%d\tptr=%p\t*ptr=%d\n",a,ptr,*ptr);
    return 0;
}
