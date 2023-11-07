#include<stdio.h>
int main()
{
    float d,e,i;
    printf("Enter the currency value in doller:\n");
    scanf("%f",&d);
    printf("Equivalent euro amount is %.2f\n",d*.23);
    printf("Equivalent INR amount is %.2f",d*1.23);
    return 0;
}
