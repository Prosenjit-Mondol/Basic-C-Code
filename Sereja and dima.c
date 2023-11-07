#include<stdio.h>
int main()
{
    int c=0,w,n,i,j,t,k,vs=0,vd=0,a[10000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    t=n;
    k=0;
    if(n%2==0)
        w=n/2;
    else
        w=(n/2)+1;
    for(j=0; j<w; j++)
    {
        if(a[k]>a[t-1])
        {
            vs+=a[k];
            k++;
            c++;
            if(c==n)
                break;
            if(a[t-1]>a[k])
            {
                vd+=a[t-1];
                t--;
                c++;
            if(c==n)
                break;
            }
            else
            {
                vd+=a[k];
                k++;
                c++;
            if(c==n)
                break;
            }
        }
        else
        {
            vs+=a[t-1];
            t--;
            c++;
            if(c==n)
                break;
            if(a[t-1]>a[k])
            {
                vd+=a[t-1];
                t--;
                c++;
            if(c==n)
                break;
            }
            else
            {
                vd+=a[k];
                k++;
                c++;
            if(c==n)
                break;
            }
        }
    }
    printf("%d %d\n",vs,vd);
    return 0;
}
