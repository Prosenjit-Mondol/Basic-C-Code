#include<stdio.h>
int main()
{
    float x,s=0,v=0;
    while(1)
    {
        scanf("%f",&x);
        if(x<0){
            break;
        }
        else{
            s=s+x;
            v++;
        }
    }
    printf("%.2f\n",(s/v));
    return 0;
}

