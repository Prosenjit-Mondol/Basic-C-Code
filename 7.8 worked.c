#include<stdio.h>
int main()
{
    int m;
    float x,sum,ave;
    printf("Enter values one after another\n enter a negative number at the end:\n");
    sum=0;
    for(m=1;m<=1000;++m)
    {
        scanf("%f",&x);
        if(x<0)
            break;
        else
            sum+=x;
    }
    ave=sum/(float)(m-1);
    printf("NUmber of values =%d\n sum     =%f\naverage    =%f\n",m-1,sum,ave);
    return 0;
}
