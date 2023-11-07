#include<stdio.h>
int main()
{
    long long int n,m,a,d,v,l,k=0;
    double r,s;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(a==1){
        v=m*n;
    }
    else{
    r=(double)n/a;
    l=ceil(r);
    if(m>a){
        d=m-a;
        if(d<=a){
            k=l;
        }
        else{
            s=(double)d/a;
            k=ceil(s);
            k=k*l;
        }
    }
    v=l+k;
   }
    printf("%lld\n",v);
    return 0;
}
