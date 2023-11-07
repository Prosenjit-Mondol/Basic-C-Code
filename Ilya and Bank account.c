#include<stdio.h>
#include<math.h>
int main()
{
    long long int e,c,d,w,x,y;
    int i,b,a,z=1,v,r=0,t=0,n;
    scanf("%lld",&x);
    if(x>=0)
    {
        printf("%lld\n",x);
    }
    else
    {
        x=abs(x);
        w=x;
        while(x)
        {
            r=x%10;
            x=x/10;
            if(r>t)
            {
                t=r;
                n=z;
            }
            z++;
        }
        v=n-1;
        a=pow(10,v);
        b=pow(10,n);
        y=w/b;
        c=y*a;d=w%a;
        printf("%d\n%d\n%lld\n%lld\n",t,n,y,);
        e=c+d;
        printf("%lld\n",-(e));
    }
    return 0;
}
