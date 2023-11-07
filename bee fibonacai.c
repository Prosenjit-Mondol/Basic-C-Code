#include<stdio.h>
int main()
{
	long long int i,j,n,a,f,s,sum;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		f=0;
		s=1;
		scanf("%lld",&a);
		a+=1;
		for(j=0;j<a;j++)
		{
				if(j<=1)
				sum=j;
				else{
				sum=f+s;
				f=s;
				s=sum;
				}
		}
			printf("Fib(%lld) = %lld\n",a-1,sum);
		}
	return 0;
}
