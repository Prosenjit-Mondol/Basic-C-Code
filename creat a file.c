#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[1000];
    FILE *fptr;
    char fname[20]="test.txt";
    printf("Create a file\n");
    fptr=fopen(fname,"w");
    if(fptr==NULL)
    {
        printf("Error in opening file !!");
        exit(1);
    }
    printf("Input a sentence\n");
    fgets(str, sizeof str , stdin);
    fprintf(fptr,"%s",str);
    fclose(fptr);
    printf("The file %s created successfully\n ",fname);
    return 0;
}
