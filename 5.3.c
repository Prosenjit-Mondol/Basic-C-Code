#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    int x,y,z;
    printf("Enter three value of a b c \n");
    scanf("%f%f%f",&a,&b,&c);
    x=ceil(a);
    y=ceil(b);
    z=ceil(c);
    printf("%d \n",x);
    printf("%d \n",y);
    printf("%d \n",z);
    return 0;
}
