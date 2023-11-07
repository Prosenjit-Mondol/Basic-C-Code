#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,a,b,y,a1=0,b1=0;
    scanf("%d",&t);
    char s[t][100],temp1[100],temp2[100];
    if(t>1)
    {
    for(i=0;i<t;i++)
    {
      scanf("%s",&s[i]);
    }
    strcpy(temp1,s[0]);//printf("%s\n",temp1);
    
    for(i=1;i<t;i++)
     {
      y=strcmp(s[i],s[i-1]);
      //printf("%d\n",y);
       if(y!=0)
       { strcpy(temp2,s[i]);break;}
        
     }
      for( int j=0;j<t;j++)
       {
          a=strcmp(temp1,s[j]);
          b=strcmp(temp2,s[j]);
        if(a==0) a1++;
        if(b==0) b1++;
       }
    if(a1>b1)
     printf("%s\n",temp1);
    else
    printf("%s\n",temp2);
    }
    
    else
    {
    scanf("%s",&s[0]);
    printf("%s\n",s[0]);
    }
     
}
    