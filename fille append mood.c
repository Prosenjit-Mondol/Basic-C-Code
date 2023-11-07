#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[50];
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fprintf(fp,"\n%s",str);
    //fputs(str,fp);
    printf("Successfully appended");
    fclose(fp);
}
