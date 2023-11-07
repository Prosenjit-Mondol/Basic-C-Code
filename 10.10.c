#include<stdio.h>
float  area(int  a,int b,int c)

{
int s=perimeter(a,b,c);
float  A;
 A=sqrt((s-a)*(s-b)*(s-c));

return(A);
}
int main()

{
int a,b,c;
float r;
printf("input  a,b,c\n");
scanf("%d  %d  %d",&a,&b,&c);
r=area(a,b,c);
printf("%f\n",r);
return 0;
}

int  perimeter(int a,int b,int c)

{

int  s;    s=(a+b+c)/2;

return(s);

}
