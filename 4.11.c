#include<stdio.h>
int main()
{
    int m,n;
    printf("Two integer values:");
    scanf("%d%d",&m,&n);
    if(m%n==0){
        printf("M is a multiple of N");
    }
    else{
        printf("M is not a multiple of N");
    }
    return 0;
}
