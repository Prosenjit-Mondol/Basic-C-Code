#include<stdio.h>
int main()
{
    int count=1,n;
    float x,y=1.0;
    printf("Enter the value of x and n : ");
    scanf("%f %d",&x,&n);
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("\nx=%f ; n=%d ; x to the power n=%f\n",x,n,y);
    return 0;
}
