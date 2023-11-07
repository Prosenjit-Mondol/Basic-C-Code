#include<stdio.h>
#include<math.h>
int main()
{
   int d,c,h;
   float e,t;
   printf("MH Nazmul=2102013\n");
    printf("Demand rate:");
    scanf("%d",&d);
    printf("setup cost:");
    scanf("%d",&c);
    printf("holding per item cost:");
    scanf("%d",&h);
    e=sqrt((2.00*d*c)/h);
    t=sqrt((2.00*c)/(d*h));
    printf("EOQ=%f\nTBO=%f",e,t);
    return 0;
}
