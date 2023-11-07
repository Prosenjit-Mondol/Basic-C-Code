#include<stdio.h>
int main()
{
   float Num=345.6789;

   printf("fixed-point format (correct to two decimal places):-- %.2f\n",Num);
   printf("fixed-point format (correct to five decimal places):-- %.5f\n",Num);
   printf("fixed-point format (correct to zero decimal places):-- %f\n",Num);
   return 0;
}
