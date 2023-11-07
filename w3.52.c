#include<stdio.h>
#include<string.h>
int main()
{
    int n[5],i,t;
    printf("Input the 5 member of the array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++){
        if(i<(5/2)){
            t=n[i];
            n[i]=n[5-(i+1)];
            n[5-(i+1)]=t;
        }
    }
    for(i=0;i<5;i++){
        printf("array[%d] = %d\n",i,n[i]);
    }
    return 0;
}
