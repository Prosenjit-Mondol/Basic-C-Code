#include<stdio.h>
#include<math.h>

double roundnum(double num,int decimalplace)
{
    double mul=pow(10,decimalplace);
    double roundnum=round(num*mul)/mul;
    return roundnum;
}
int main()
{
    double number;
    int decimalplace=2;
    scanf("%lf",&number);
    double num=roundnum(number,decimalplace);
    printf("%lf\n",num);
    return 0;
}
