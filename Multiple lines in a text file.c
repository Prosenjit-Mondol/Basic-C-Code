#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n;
    char str[1000];
    char fname[100]="text.txt";
    char str1;
    printf("Input the number of lines to written:\n");
    scanf("%d",&n);
    printf(":: The lines are ::\n");
    fptr=fopen("fname","W");
    for(i=0;i<n;i++)
    {
        fgets(str, sizeof str , stdin);
        fputs(str , fptr);
    }
    fclose (fptr);
    fptr =fopen(fname , "r");
    printf("The content of the file %s is :\n",fname);
    str1=fgetc(fptr);
    while(str1 != EOF)
    {
        printf("%c",str1);
        str1=fgetc(fptr);
    }
    printf("\n\n");
    fclose(fptr);
    return 0;
}
