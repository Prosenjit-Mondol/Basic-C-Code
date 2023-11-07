#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    int c=98;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fprintf(fp,"%s%d",str,c);
    //fputs(str,fp);
    fclose(fp);
}
