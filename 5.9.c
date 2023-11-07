#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="Prosenjit";
    char str2[10]="Kumar";
    char str3[10]="Mondol";
    printf("%s %.1s. %s\n",str1,str2,str3);
    printf("%.1s. %.1s. %s\n",str1,str2,str3);
    printf("%s %.1s. %.1s.\n",str3,str1,str2);
    return 0;
}
