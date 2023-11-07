#include<stdio.h>
int main()
{
   float x=75.78578788;
   printf("%7.4f\n",x);
   printf("%-7.2f\n",x);
   printf("%10.2e\n",x);
   printf("%11.4e\n",-x);
   printf("-10.2e\n",x);
   printf("%e\n",x);
   return 0;
}
