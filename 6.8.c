#include<stdio.h>
int main()
{
    float x,v;
    int s;
    scanf("%f",&x);
    if(x<100)
        s=1;
        else if(101<=x<=200)
            s=2;
        else if(201<=x<=300)
            s=3;
        else
            s=4;
        switch(s)
        {
        case 1:
            printf("Mill cloth amount is %f\n",x);
            printf("Handloom cloth amount is %f\n",(x+x*5/100));
            break;
        case 2:
            printf("Mill cloth amount is %f\n",(x+x*5/100));
            printf("Handloom cloth amount is %f\n",(x+x*7.5/100));
            break;
        case 3:
            printf("Mill cloth amount is %f\n",(x+x*7.5/100));
            printf("Handloom cloth amount is %f\n",(x+x*10.0/100));
            break;
        case 4:
             printf("Mill cloth amount is %f\n",(x+x*10.0/100));
            printf("Handloom cloth amount is %f\n",(x+x*15.0/100));
            break;
        }
        return 0;
}
