#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,a[150];
	char s1[150],s2[150];
	scanf("%s%s",s1,s2);
	k=strlen(s1);
	for(i=0;i<k;i++)
	{
		if(s1[i]==s2[i])
            a[i]=0;
		else
		a[i]=1;
	}
	for(j=0;j<k;j++)
	printf("%d",a[j]);
	printf("\n");
	return 0;
}
