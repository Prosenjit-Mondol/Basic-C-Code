#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>(b+c)||b>(d+c))
        printf("N\n");
    /*else if(a>(b+d)||b>(a+d)||d>(a+b))
        printf("N\n");
    else if(a>(c+d)||c>(a+d)||d>(a+c))
        printf("N\n");
    else if(b>(d+c)||d>(b+c)||c>(b+d))
        printf("N\n");*/
    else
        printf("S\n");
    return 0;
}
