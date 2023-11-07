#include<stdio.h>
char *deletechar(char *str,char ch)
{
    char  *temp=str;
    char *p=str;
    while(*temp)
    {
        if(*temp != ch)
        {
            *p=*temp;
            p++;
        }
        temp++;
    }
    *p='\n';
    return str;
}
int main()
{
    char str[]="This is a test string";
    char ch='i';
    char *newstr=deletechar(str,ch);
    printf("The string after deleting all occurrence of %c is : %s\n",ch,newstr);
    return 0;
}
