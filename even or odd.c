#include<stdio.h>
int main()
{
    long int i,x;
    scanf("%ld",&x);
    for(i=x;i>=1;i/=10){
        x=i;
    }
    if(x%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}
