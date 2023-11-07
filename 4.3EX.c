#include<stdio.h>
int main()
{
    int i,n;
    printf("enter 5 digit number:\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf(" %d\n",n%10000);
    printf("  %d\n",n%1000);
    printf("   %d\n",n%100);
    printf("    %d\n",n%10);
    return 0;
}
