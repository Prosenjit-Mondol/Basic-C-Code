#include<stdio.h>
void insertsub(char *str,char *substring,int index)
{
    int len=strlen(str);
    int sublen=strlen(substring);
    for(int i=len-1;i>=index+sublen;i--)
    {
        str[i+sublen-1]=str[i];
    }
    for(int j=0;j<sublen;j++)
        str[index+j]=substring[j];
}
int main()
{
    char str[] = "This is a test string";
    char substring[] = "insert";
    int index = 5;

    insertsub(str, substring, index);

    printf("The string after inserting the substring is: %s\n", str);

    return 0;
}
