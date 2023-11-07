#include<stdio.h>
#include<string.h>
int main()
{
	int j,i,k=0,v;
	char s[500],p[500];
	scanf("%s",s);
	for(i=0;s[i]!='\0';)
	{
		if(s[i]=='W'&&s [i+1]=='U'&& s[i+2]=='B')
		{
		i=i+3;
		}
		else
		{
			for(v=0,j=i;s[j]!='\0';j++)
			{
			p[k]=s[j];
			v++;
			k++;
			if(s[j+1]=='W'&&s[j+2]=='U'&&s[j+3]=='B')
			{
				p[k]=' ';
				k++;
				break;
			}
			else
			continue;
			}
			i=i+v;
		}
	}
	p[k]='\0';
	printf("%s\n",p);
	return 0;
}
