#include<stdio.h>
#include<math.h>
int main()
{
    int gcd,i,x,num1,num2;
    printf("Enter the number :\n");
    scanf("%d%d",&num1,&num2);
    if(num2>num1)
        x=num2/2;
    else
        x=num1/2;
        //printf("%d",x);
     for(i=x;i>0;i--)
     {
        // printf("1");
         if(num1%i==0 && num2%i==0)
         {
            gcd=i;
            break;
         }
     }
     printf("%d\n",gcd);
     return 0;
}
