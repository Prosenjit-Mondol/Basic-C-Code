#include<stdio.h>
main()
{
    int i;
    char s[100];
    gets(s);

    for(i=0;s[i]!='\0';i++)
{
     if(s[i]<='Z' && s[i]>='A')
        {
             s[i]=s[i]+32;
        }
        if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' &&
               s[i]!='o' && s[i]!='O' && s[i]!='u' &&  s[i]!='U' && s[i]!='y' && s[i]!='Y')
            {
     printf(".%c",s[i]);
            }

    }
}



