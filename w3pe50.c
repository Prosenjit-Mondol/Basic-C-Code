#include<stdio.h>
int main()
{
    int val[5],x[5],i;
    printf("Input the 5 member of the array:\n");
    for(i=1;i<=5;i++){
        scanf("%d",&val[i]);
    if(val[i]<5){
        printf("A[%d] = %d\n",i,val[i]);
    }
    }
    return 0;
}

