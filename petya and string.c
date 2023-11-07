#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int a,b,i,s1s=0,s2s=0;
	scanf("%s",&s1);
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++){
        a=s1[i];
        b=s2[i];
        printf("\n%d %d\n",a,b);
        if(a==b){
            s1s+=a;
            s2s+=b;
        }
        else if(a==(b+32))
        {
            s1s+=a;
            s2s=s2s+(b+32);
        }
        else if((a+32)==b)
        {
            s1s=s2s+(a+32);
            s2s+=b;
        }
        else if(a!=b&&s1[i]>96&&s2[i]<97)
        {
            s1s+=a;
            s2s=s2s+(b+32);
        }
        else if(a!=b&&s1[i]<97&&s2[i]>96)
        {
            s1s+=(a+32);
            s2s=s2s+b;
        }
        else if(a!=b&&s1[i]<97&&s2[i]<97){
            s1s+=a;
            s2s+=b;
        }
        else if(a!=b&&s1[i]>96&&s2[i]>96){
            s1s+=a;
            s2s+=b;
        }
        printf("\n%d %d\n",s1s,s2s);
	}
	if(s1s==s2s){
            printf("0\n");
	}
    else if(s1s<s2s){
            printf("-1\n");
	}
	else if(s1s>s2s){
            printf("1\n");
	}
	return 0;
}
