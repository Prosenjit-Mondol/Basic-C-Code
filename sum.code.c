#include<stdio.h>
int main()
{
    long int n;
    int j,i,a,b,c,s;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)==c || (b+c)==a || (c+a)==b)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
