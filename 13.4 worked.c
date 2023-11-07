#include<stdio.h>
int main()
{
    char filename[100];
    FILE *fp1,*fp2;
    int i,number;
    fp1=fopen("TEST","w");
    for(i=10;i<=500;i+=10)
        putw(i,fp1);
    fclose(fp1);
    printf("\nInput Filename\n");
    scanf("%s",filename);

    if((fp2=fopen(filename,"r"))==NULL)
    {
        printf("Cannot open the file.\n");
        exit(0);

    }
    else

        for(i=1;i<=50;i++)
    {
        number=getw(fp2);
        if(feof(fp2))
        {
            printf("\n Ran out of data .\n");
            break;
        }
        else
            printf("%d\n",number);

    }
    fclose(fp2);
    return 0;
}
