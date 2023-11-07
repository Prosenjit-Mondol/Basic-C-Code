#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>0){
        printf("1\n");
    }
    else if(x==0){
        printf("0");
    }
    else if(x<0){
        printf("-1");
    }
    return 0;
}
