#include<stdio.h>
main(int argc, char *argv[])
{

FILE *fp;
int i;
char word[100];
fp=fopen(argv[1],"w");
printf("\nNo. of argument in Command line = %d \n",argv[1]);
for(i=2;i<argv[i];i++)
{
    fprintf(fp,"%s ",argv[i]);
}
fclose(fp);
printf("Content of %s file\n",argv[1]);
fp=fopen(argv[1],"r");
for(i=2;i<argc;i++)
{
    fscanf(fp,"%s",word);
    printf("%s",word);

}
fclose(fp);
printf("\n\n");
for(i=0;i<argc;i++)
{
    printf("%*s\n",i*5,argv[i]);

}
}
