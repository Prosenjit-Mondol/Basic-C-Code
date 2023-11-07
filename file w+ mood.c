#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char ch;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fprintf(fp,"%s",str);
    rewind(fp);
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);
}
