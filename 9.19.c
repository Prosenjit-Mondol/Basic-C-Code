#include<stdio.h>
#include<string.h>
int main()
{
   char str[10][50],temp[50];
   int i,j;
   printf("Enter 10 Words:\n");
   for(i=0;i<10;i++)
   scanf("%s[^\n]",str[i]);
   for(i=0;i<9;i++)
   {
     for(j=i+1;j<10;j++)
     {
       if(strcmp(str[i],str[j])>0)
       {
         strcpy(temp,str[i]);
         strcpy(str[i],str[j]);
         strcpy(str[j],temp);
       }
     }
   }
   printf("\nIn lexicographical order: \n");
   for(i=0;i<10;i++)
   puts(str[i]);
   return 0;
}
