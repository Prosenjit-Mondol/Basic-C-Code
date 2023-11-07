#include<stdio.h>
int main ()
{
    float h,l,b,x1,x2;
    printf("Enter hight:");
    scanf("%f",&h);
    printf("Enter length:");
    scanf("%f",&l);
    printf("Enter base:");
    scanf("%f",&b);
    x1=h*h;
    x2=b*b+l*l;
    if(x1==x2){
        printf("They are the sides of right-angle tringle");
    }
    else{
        printf("They are not the sides of right-angle tringle");
    }
    return 0;
}
