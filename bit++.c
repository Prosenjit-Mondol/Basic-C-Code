#include<stdio.h>
#include<string.h>
main()
{
int X,i,j,sum=0;
char s[150];
scanf("%d",&X);
if(X>=1 && X<=150)
{
   for(i=0; i<X; i++)
   {
       scanf("%s",&s[i]);

      if((s[i]=='+' && s[i+1]=='+' && s[i+2]=='X') || (s[i]=='X' && s[i+1]=='+' && s[i+2]=='+')  )
      {
          sum=sum+1;
      }
      else if((s[i]=='-' && s[i+1]=='-' && s[i+2]=='X') || (s[i]=='X' && s[i+1]=='-' && s[i+2]=='-') )
      {
          sum=sum-1;
      }
   }
   printf("%d\n",sum);
}
}
