#include<stdio.h>
#define MAX 50
int main()
{
char Str1[MAX],Str2[MAX];
printf("Enter First String:--\n");
gets(Str1);
printf("Enter Second String:--\n");
gets(Str2);
if(strcmp(Str1,Str2)==0)
printf("\nBoth Strings are Equal\n");
else if(strcmp(Str1,Str2)<0)
printf("\nFirst String is Less Than\n");
else
printf("\nFirst String is Greater Than\n");
return 0;
}
