#include<stdio.h>

char* locate(char *s1,char *s2,int m)
{
    int i,j;
    static char temp[100];
    for(i=0;i<m;i++)
    {
        temp[i]=s1[i];
    }
    for(j=0;s2[j]!='\0';j++)
    {
        temp[i+j]=s2[j];
    }
    return temp;
}
int main()
{
    char s1[100],s2[100];
    int m;
    printf("Enter string:\t");
    scanf("%s",s1);
    printf("Enter 2nd string:\t");
    scanf("%s",s2);
    printf("Enter index:\t");
    scanf("%d",&m);
    char *update;
    update=locate(s1,s2,m);
    printf("%s",update);
    return 0;
}
