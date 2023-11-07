#include<stdio.h>
int main()
{
	int a,b,c,d,m,n,x1,x2;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
	if((a*d-c*d)==0){
		printf("An appropriate\n");
	}
	else{
		x1=(m*d - b*n)/(a*d-c*d);
		x2=(n*a-m*c)/(a*d-c*d);
		printf("The  value of x1=%d and x2=%d",x1,x2);
	}
	return 0;
}

