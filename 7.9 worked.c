#include<stdio.h>
#define loop 100
#define accuracy 0.0001
int main()
{
    int n;
    float x,term,sum;
    printf("Input value of x:");
    scanf("%f",&x);
    sum=0;
    for(term=1,n=1;n<=loop;++n)
    {
        sum+=term;
        if(term<=accuracy)
            goto output;
        term*=x;
    }
    output:
        printf("EXIT FROM LOOP\n Sum=%f;No of termS=%d\n",sum,n);

}
