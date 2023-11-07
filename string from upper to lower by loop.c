#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l,i;
    printf("enter a upper case string\n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
        //if(s1[i]>=65&&s1[i]<=90)
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }
    puts(s1);
    printf("enter a lower case string\n");
    gets(s2);
    for(i=0;s2[i]!='\0';i++){
        if(s2[i]>=97&&s2[i]<=122)
        //if(s2[i]>='a'&&s2[i]<='z')
        {
            s2[i]=s2[i]-32;
        }
    }
    puts(s2);
    return 0;
}
