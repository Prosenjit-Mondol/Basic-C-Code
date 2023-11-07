#include<stdio.h>
  int main()
  {
      int y,n,i,ch=0;

      scanf("%d",&n);
      int a,b,c,d;
     for ( i=0; i<8000; i++){
           n++;
           y=n;
          a=y%10; y=y/10;

          b=y%10;  y=y/10;

          c=y%10; y=y/10;

          d=y;
          if(a!=b && a!=c && a!=d && b!=c&& b!=d && c!=d)

          {
              printf("%d%d%d%d\n",d,c,b,a);
              return 0;
          }
     }
  }
