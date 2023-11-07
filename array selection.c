#include<stdio.h>
int main()
{
    float a[100];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]<=10){
            printf("A[%d] = %.1f\n",i,a[i]);
        }
    }
    return 0;
}
