#include<stdio.h>
#include<string.h>
main()
{
    int i,j=0,k,a=0,l=0;
    char n[100];
    gets(n);
    k=strlen(n);
    for(i=0;i<k;i++)
    {
       if(n[i]=='7'){l++;}
       if(n[i]=='4' ){a++;}
    }
    if(l+a==7 || l+a==4){printf("YES");}
    else{printf("NO");}

}
