#include<stdio.h>
int main()
{
    double x,y,z,a,b,c;
    scanf("%lf%lf%lf",&x,&y,&z);
    a=(x>y)?((x>z)?x:z):((y>z)?y:z);
    c=(x<y)?((x<z)?x:(z<y)?z:y):((y<z)?y:(z<x)?z:x);
    b=(x<y)?((z<x)?x:(z<y)?z:y):((y<z)?z:(z<x)?y:x);
    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if((a*a)==(b*b+c*c))
        printf("TRIANGULO RETANGULO\n");
    else if((a*a)>(b*b+c*c))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((a*a)<(b*b+c*c))
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    if((a==b && b!=c)||( b==c && c!=a)||(a==c && c!=b))
        printf("TRIANGULO ISOSCELES\n");
        return 0;
}
/*
#include <stdio.h>
int main()
{
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         printf("NAO FORMA TRIANGULO\n");
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           printf("TRIANGULO RETANGULO\n");
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           printf("TRIANGULO ACUTANGULO\n");
    if(a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            printf("TRIANGULO ISOSCELES\n");
   return 0;
}*/
