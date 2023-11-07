#include<stdio.h>
int main()
{

    int p,i,t,si;
    printf("Input principle , rate of interest , and time:\n");
    scanf("%d%d%d",&p,&i,&t);
    si=(p*i*t)/100;
    printf("Simple interest: %d\n",si);
    return 0;
}
