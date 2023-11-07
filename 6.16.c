#include<stdio.h>
int main()
{
    double x,Val=0;
    char T;
    printf("Enter Angle:--\n");
    scanf("%lf",&x);
    printf("\ns or S for Sin(x) \ns or S for Cos(x) \ns or S for Tan(x)\nEnter Choice ");
    T=getch();
    switch(T)
    {
    case 's':
    case 'S': Val=sin(x); break;
    case 'c':
    case 'C': Val=cos(x); break;
    case 't':
    case 'T': Val=tan(x); break;
    default:printf("\nWrong Input\n");
    }
    printf("Value:--- %lf\n",Val);
    return 0;
}
