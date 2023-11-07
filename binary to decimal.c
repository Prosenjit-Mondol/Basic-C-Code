#include <stdio.h>
#include <math.h>
int main()
{       int n1, n;
	int dec=0,i=0,j,d;

     printf("\n\nConvert Binary to Decimal:\n ");
     printf("-------------------------\n");


	printf("Input  the binary number :");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{  d = n % 10;
	   dec=dec+d*pow(2,i);
	   n=n/10;
	   i++;
	}
        printf("\nThe Binary Number : %d\nThe equivalent Decimal  Number is : %d\n\n",n1,dec);
        return 0;
}
