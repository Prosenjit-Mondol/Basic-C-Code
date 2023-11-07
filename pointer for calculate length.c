#include<stdio.h>
int  main()
{
    char s[100];
    int i;
    printf("Enter a string:\n");
    gets(s);
    i=calculatelength(s);
    printf("The length f the string: %d\n",i);
    return 0;
}
int calculatelength(char* ch)
{
    int c=0;
    while(*ch !='\0')
    {
        c++;
        ch++;
    }
    return c;
}
