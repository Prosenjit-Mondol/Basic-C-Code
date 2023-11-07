#include<stdio.h>
int main()
{
    int year=1,period;
    float amount,inrate,valu;
    printf("Input amount interest rate and period\n\n");
    scanf("%f%f%d",&amount,&inrate,&period);
    while(year<=period)
    {
        valu=amount+inrate*amount;
        printf("%2d Rs %8.2f\n",year,valu);
        amount=valu;
        year++;
    }
    return 0;
}
