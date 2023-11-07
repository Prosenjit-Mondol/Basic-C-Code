#include<stdio.h>
int main()
{
    int i,c=0;
    long int n;
    scanf("%ld",&n);
    if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0)
    {
        c=1;
    }
    else
    {
        for(c=0;n>0;n/=10){
        if(n%10==4 || n%10==7)
            c=1;
            else
            {
               c=0;
               break;
            }
        }
    }
    if(c==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
