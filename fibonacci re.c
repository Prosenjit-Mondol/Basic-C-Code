#include<stdio.h>
int main()
{
    int x,count=0,first=0,secound=1,fibo;
    scanf("%d",&x);
    while(count<x)
    {
        if(count<=1){
            fibo=count;
    }
    else{
        fibo=first+secound;
        first=secound;
        secound=fibo;
    }
    printf("%d",fibo);
    printf(" ");
    count++;
    }
    return 0;
}
