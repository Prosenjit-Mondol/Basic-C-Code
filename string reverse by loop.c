#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],t;
    int l,i;
    printf("enter a strinng\n");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++){
        t=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=t;
    }
    printf("the reverse string by using loop\n");
    puts(s1);
    return 0;
}
