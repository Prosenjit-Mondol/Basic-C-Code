#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,i;
    char s1[]="Prosenjit",s2[]=" Mondol";
    strcat(s1,s2);
    printf("Catenate s1 s2 by uning strcat function:\n");
    puts(s1);
    printf("Catenate s1 s2 by uning loop:\n");
    len1=strlen(s1);
    len2=strlen(s2);
    /*printf("s1 length is %d\ns2 length is %d\n",len1,len2);
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("%s\n",s1);*/
    return 0;
}
