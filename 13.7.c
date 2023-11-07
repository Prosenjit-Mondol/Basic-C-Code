#include<stdio.h>
#include<string.h>
void main(int argc , char *argv[])
{
    FILE *fs;
    char str[1000];
    int i,j,n;
    if(argc!=3)
    {
        puts("Improper number of argument.");
        exit(0);
    }
    n=atoi(argv[2]);
    fs=fopen(argv[1],"r");

    if(fs==NULL)
    {
        printf("Source file cannot be opened.");
        exit(0);

    }
    i=0;
    while(1)
    {
        if((str[i]=fgetc(fs))!=EOF)
            j=i+1;
        else
            break;

    }
    fclose(fs);
    fs=fopen(argv[1],"w");

    if(n<0 || n>strlen(str))
    {
        printf("Incorrect value of n. Program will terminate...\n\n");
        exit(1);

    }
    j=strlen(str);
    for(i=1;i<=n;i++,j--)
    {
        fputc(str[j],fs);
    }
    fclose(fs);
    printf("\n%d character of the file successfully printed in reverse order",n);

}
