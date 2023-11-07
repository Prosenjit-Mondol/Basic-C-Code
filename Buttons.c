#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n--)
    {
        long long int a,b,c,i,j,va=0,vb=0;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a>=c)
            printf("First\n");
        else if(a<b)
            printf("Second\n");
        else
        {
            while(c)
            {
                i=c/a;
                if(i>0)
                {
                    va+=a;
                    c-=a;
                }
                else
                {
                    va+=c;
                    c=0;
                }
                j=c/b;
                if(j>0)
                {
                    vb+=b;
                    c-=b;
                }
                else
                {
                    vb+=c;
                    c=0;
                }

            }
            if(va>vb)
                printf("First\n");
            else if(vb>va)
                printf("Second\n");
            else if(va==vb)
            {
               if(c%2==0)
                    printf("Second\n");
               else
                   printf("First\n");
            }
        }
    }
    return 0;
}
