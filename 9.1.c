#include<stdio.h>
#include<string.h>
int main()
{
    char v,s[50];
    int i;
    printf("Enter your name:\n");
    gets(s);
    printf("Equivalent list of ASCII codes:\n");
    for(i=0;s[i]!='\0';i++)
    {
       printf("%c=%d\n",s[i],s[i]);
    }
    return 0;
}
