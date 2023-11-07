#include<stdio.h>
int main()
{
    long int n;
    int x,i,j,a=0,b=0,c=0,d=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
            a++;
        if(x%3==0)
            b++;
        if(x%4==0)
            c++;
        if(x%5==0)
            d++;
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
    return 0;
}
