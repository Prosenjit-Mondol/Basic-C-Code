#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
char array1[SIZE],array2[SIZE],array3[SIZE];
scanf("%s %s %s",array1,array2,array3);
int length=strlen(array1);
int length2=strlen(array2);
int length3=strlen(array3);
int yes1=0,yes2=0,no=length3,y;
if(length+length2!=length3)
{
printf("NO");
return 0;
}
int i;
for(i=0;i<length;i++)
{
for(y=0;y<length3;y++)
{
if(array3[y]==array1[i])
{
array3[y]=0;
yes1++;
no--;
break;
}
}
}
for(i=0;i<length2;i++)
{
for(y=0;y<length3;y++)
{
if(array3[y]==array2[i])
{
array3[y]=0;
yes2++;
no--;
break;
}
}
}
if(yes1==length&&yes2==length2&&no==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
