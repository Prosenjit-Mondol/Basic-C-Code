#include<stdio.h>
int main()
{
   float Num=10.45678;

   printf("exponential format with correct to two decimal places:-- %.2e\n",Num);
   printf("exponential format with correct to four decimal places:-- %.4e\n",Num);
   printf("exponential format with correct to eight decimal places:-- %.8e\n",Num);
   return 0;
}
