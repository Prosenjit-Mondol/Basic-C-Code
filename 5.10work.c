#include<stdio.h>
int main()
{
    char x='A';
    char name[20]="PROSENJIT MONDOL";
    printf("OUTPUT OF CHARACCTERS\n\n%c\n%3c\n%5c\n%3c\n%c\n",x,x,x,x,x);
    printf("OUTPUT OF STRING\n\n%s\n%20.10s\n%.5s\n%.1s\n%5.1s\n%10.1s\n",name,name,name,name,name,name);
    return 0;
}
