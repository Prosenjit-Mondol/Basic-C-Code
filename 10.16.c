#include<stdio.h>
#include<string.h>
int find(char array[],char c)
{
    for(int i=0;array[i]!='\0';i++)
    {
        if(array[i]==c)
            return 1;
    }
    return 0;
}
int main()
{
    char ch,aa[100];
    printf("Enter a string:\t");
    scanf("%s",aa);
    printf("Enter a character to search for :\t");
    scanf(" %c",&ch);
    int r=find(aa,ch);
    printf("%d",r);
    return 0;
}
