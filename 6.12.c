#include<stdio.h>
int main()
{
    int Units;
    char c[100];
    float Charge;
    printf("Enter Name of User:--\n");
    scanf("%s",&c);
    printf("Enetr Total Units Consumed\n");
    scanf("%d",&Units);
    if(Units>=0&&Units<=200)
    Charge=100+(Units*0.80);
    else if(Units>200&&Units<=300)
    Charge=100+(Units*0.90);
    else if(Units>300&&Units<=400)
    Charge=100+Units;
    else
    Charge=(100+Units)+(100+Units)*.15;
    printf("Name Units Charge\n");
    printf("%s %d %.2f",c,Units,Charge);
    return 0;
}
