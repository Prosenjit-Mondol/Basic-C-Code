#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,s1s,s2s;
    scanf("%s",&s1);
    scanf("%s",&s2);
    for(i=0;s1[i]!='\0';i++){
        s1s+=s1[i];
    }
    for(i=0;s2[i]!='\0';i++){
        s2s+=s2[i];
    }
    printf("\n%d %d\n",s1s,s2s);
    if(s1s+s2s<0)
    {
        printf("-1\n");
    }
    else if(s1s+s2s>0)
    {
        printf("0\n");
    }
    else if(s1s+s2s==0)
    {
        printf("0\n");
    }
    printf("%d %d\n",'a','A');
    return 0;
}
