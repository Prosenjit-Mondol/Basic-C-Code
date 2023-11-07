#include<stdio.h>
#include<math.h>
int main()
{
    int i,s;
    double r;
    for(i=0;i<=100;i++){
        s=i*i;
        r=sqrt(i);
        printf("%d  %lf  %d\n",i,r,s);
    }
    return 0;
}
