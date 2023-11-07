#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double s,c;
    for(i=0;i<=180;i+=15){
            s=sin(i);
            c=cos(i);
        printf("%d  sin(%d)=%lf  cos(%d)=%lf\n",i,i,s,i,c);
    }
    return 0;
}
