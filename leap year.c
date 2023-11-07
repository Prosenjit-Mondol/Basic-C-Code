#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
     if(x%4==0 && x%15==0 && x%55==0){
        printf("This is leap year.\n");
        printf("This is huluculu festival year.\n");
        printf("This is buluculu festival year.\n");
         printf("\n");
    }
    else if(x%4==0 && x%15==0){
        printf("This is leap year.\n");
        printf("This is huluculu festival year.\n");
         printf("\n");
    }
    else if(x%4==0){
        printf("This is leap year.\n");
         printf("\n");
    }
    else if(x%15==0){
        printf("This is huluculu festival year.\n");
         printf("\n");
    }
    else if(x%55==0){
        printf("This is buluculu festival year.\n");
         printf("\n");
    }
    else
    {
        printf("This is an ordinary year.\n");
         printf("\n");
    }
    }
    return 0;
}
