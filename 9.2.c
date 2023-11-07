#include<stdio.h>
#include<string.h>
int main()
{
    char ch[60];
    printf("Who is the inventor of C?\n");
    gets(ch);
    if(strcmp(ch,"Dennis Ritchie")==0)
        printf("good\n");
    else
    printf("try again\n");
    return 0;
}
