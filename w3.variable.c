#include<stdio.h>
int main()
{
   int ara[100];
   int i,n;
   printf("Input the number of element to be stored in arrary:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("element - %d:",i);
    scanf("%d",&ara[i]);
   }
   printf("After the sorting the array are :\n");
   for(i=0;i<n;i++){
    printf("%d\n",ara[i]);
   }
   return 0;
}
