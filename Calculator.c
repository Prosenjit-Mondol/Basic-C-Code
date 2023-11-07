#include<stdio.h>
int main()
{
    long int a,b;
    char op;
    scanf("%ld%c%ld",&a,&op,&b);
    switch (op)
	{
		case '+':
		printf("%ld\n",a+b);
		break ;
		case '-' :
		printf("%ld\n",a-b);
		break ;
		case '*' :
		printf("%ld\n",a*b);
		break ;
		case '/' :
		printf("%ld\n",a/b);
		break ;
	}
	return 0;
}
