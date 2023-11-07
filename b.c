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
       scanf("%s",&s);

      if(s=='++X' || s=='X++' )
      {
          sum=sum+1;
      }
      else if((s=='--X' ||s=='X--') )
      {
          sum=sum-1;
      }
   }
   printf("%d",sum);
}
return 0;
}
