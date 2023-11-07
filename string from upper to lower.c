#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int valu=0,i;
    printf("enter a lower case strinng\n");
    gets(s1);
    strupr(s1);
    printf("the upper case string by using function\n");
    puts(s1);
    printf("enter a upper case strinng\n");
    gets(s2);
    strlwr(s2);
    printf("the upper case string by using function\n");
    puts(s2);
    return 0;
}
