#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	scanf("%s",&s1);
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++){
        s1[i]=towlower(s1[i]);
        s2[i]=towlower(s2[i]);
	}
	if(strcmp(s1,s2)==0){
        printf("0\n");
	}
	else{
        for(i=0;s1[i]!='\0';i++){
        if(s1[i]>s2[i]){
            printf("1\n");
            break;
        }
        else if(s1[i]<s2[i]){
            printf("-1\n");
            break;
        }
    }
	}
	return 0;
}
