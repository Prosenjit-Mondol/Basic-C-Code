#include<stdio.h>
int main()
{
    int a,m,s,r,y;
    scanf("%d%d%d",&a,&m,&s);
    r=a-(m+s);
    y=(r>m)?((r>s)?r:s):((m>s)?m:s);
    printf("%d\n",y);
    return 0;
}
