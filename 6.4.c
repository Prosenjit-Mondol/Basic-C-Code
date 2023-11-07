#include<stdio.h>
int main()
{
    int m,p,c,t,a;
    printf("Mark in mathmatics:");
    scanf("%d",&m);
    printf("Mark in Physics:");
    scanf("%d",&p);
    printf("Mark in Chemistry:");
    scanf("%d",&c);
    t=m+p+c;
    a=p+m;
    if(t>=200 || a>=150){
        printf("The candidate is eligible");
    }
    else{
        printf("The candidate is not eligible");
    }
    return 0;
}
