#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char fname[20];
    char str;
    printf("Input the filename to be opened:");
    scanf("%s",fname);
    fptr=fopen(fname,"r");
    if(fptr == NULL)
    {
        printf("File does not exist or cannot be opened\n");
        exit(0);
    }
    printf("The content of the file %s is:\n",fname);
    str=fgetc(fptr);
    while(str!=EOF)
    {
        printf("%c",str);
        str=fgetc(fptr);
    }
    fclose(fptr);
    printf("\n");
    return 0;
}
