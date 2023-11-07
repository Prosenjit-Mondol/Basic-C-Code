#include<stdio.h>
int main()
{
    int u,a,t,r;
    printf("Enter time in second:");
    scanf("%d",&t);
    printf("Enter acceleration:");
    scanf("%d",&a);
    printf("Enter intial  velocity:");
    scanf("%d",&u);
    r=u*t+(a*t*t)/2;
    printf("distance=%d",r);
    return 0;
}
