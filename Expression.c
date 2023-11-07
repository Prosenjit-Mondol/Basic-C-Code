#include<stdio.h>
int main()
{
    int i,v,a,b,c,x,y,z,u,r=0;
    scanf("%d%d%d",&a,&b,&c);
    x=a+(b*c);
    y=a*(b+c);
    z=a*b*c;
    u=(a+b)*c;
    v=a+b+c;
    if(r<x)
        r=x;
    if(r<y)
        r=y;
    if(r<z)
        r=z;
    if(r<u)
        r=u;
    if(r<v)
        r=v;
    printf("%d\n",r);
    return 0;
}
