#include<stdio.h>
int main()
{
    int m,n,aa,b,c;
    int a[4];
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(m=0;m<4;m++)
    {
        for(n=m+1;n<4;n++)
        {
            if(a[m]>=a[n])
            {
                int t=a[m];
                a[m]=a[n];
                a[n]=t;
            }
        }
    }
    c=a[3]-a[0];
    b=a[2]-c;
    aa=a[1]-c;
    printf("%d %d %d\n",aa,b,c);
    return 0;
}
