#include<stdio.h>
#include<math.h>
int main()
{
    double r,l,c,f;
    printf("Enter inductace resistance and capacitance:");
    scanf("%lf%lf%lf",&l,&r,&c);
    f=sqrt((1/l*c)-(r*r/4*c*c));
    printf("The damped natural frequence :%.2lf\n",f);
    return 0;
}
