#include<stdio.h>
#include<math.h>

int primecheck(int);
int armstrongcheck(int);

int main()
{
    int n,flag;
    printf("Enter any positive nnumber:");
    scanf("%d",&n);

    flag=primecheck(n);
    if (flag == 1)
      printf("%d is a prime number.\n", n);
    else
      printf("%d is not a prime number.\n", n);

      flag=armstrongcheck(n);
      if (flag == 1)
         printf("%d is an Armstrong number.", n);
      else
          printf("%d is not an Armstrong number.", n);

   return 0;
}

int primecheck(int n)
{
    if(n==2)
    {
        return 0;
    }
    int i,flag=1,t;
    t=sqrt(n);
    for(i=2;i<=t;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int armstrongcheck(int n)  //abcd... = an + bn + cn + dn +
{
    int num,r,i=0,flag;
    double result=0.0;
    for(num=n;num!=0;++i)
    {
        num/=10;
    }
    for(num=n;num!=0;num/=10)
    {
        r=num%10;
        result+=pow(r,n);
    }
     if (round(result) == num)
        flag = 1;
     else
        flag = 0;
   return flag;
}
