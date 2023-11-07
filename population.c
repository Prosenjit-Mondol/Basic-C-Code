#include<stdio.h>
int main()
{
    long long int pa,pb,d;
    double ga,gb,g;
    scanf("%lld%lld%lf%lf",&pa,&pb,&ga,&gb);
    d=pb-pa;
    g=ga-gb;
    printf("%lld",(d/(g*ga/100)));
    return 0;
}
