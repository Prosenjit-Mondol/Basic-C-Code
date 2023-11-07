#include<stdio.h>
int main()
{
char Str[50],CheckChar;
int i,Count,Len;
Count=0;
printf("Enter a String:---\n");
scanf("%[^\n]s",&Str);
Len=strlen(Str);
fflush(stdin);
printf("Enter a charatcer:--\n");
scanf("%c",&CheckChar);
for(i=0;i<=Len;i++)
if(CheckChar==Str[i])
Count=Count+1;
printf("Number of occurences of %c is %d",CheckChar,Count);
return 0;
}
