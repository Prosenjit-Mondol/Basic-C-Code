#include<stdio.h>
int main()
{
    int x;
    printf("Enter mark:");
    scanf("%d",&x);
    if(x>=80)
        printf("First Divi9sion");
    else if(60<=x<80)
      printf("Second Division");
    else
        printf("Third Division");
    return 0;
}
