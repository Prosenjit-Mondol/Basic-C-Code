#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char t,s1[100];
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i+=2){
		for(j=0;s1[j]!='\0';j+=2){
			if(s1[i]<=s1[j]){
				t=s1[i];
				s1[i]=s1[j];
				s1[j]=t;
			}
		}
	}
	printf("%s\n",s1);
	return 0;
}
