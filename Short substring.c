#include<stdio.h>
#include<string.h>
main()
{
    int i,n,count=0,k,j,y;
    scanf("%d",&n);
    char x[n][100];
    for(i=0;i<n;i++)
    {
      scanf("%s",&x[i]);
    y=strlen(x[i]);
   // printf("%c",x[i][2]);
   for(j=1;j<y;j+2)
       {
      if(x[i][j]==x[i][j+1])
        {
        for(int l=j;l<y;l++)
           {
            x[i][l]=x[i][l+1];
           }
        }y--;j++;
       }

     }
    for(i=0;i<n;i++)
    printf("%s\n",x[i]);
    return 0;
}
