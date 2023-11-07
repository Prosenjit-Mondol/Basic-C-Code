#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int v=0,n,m;
        char s[50][50],ss[4]="vika";
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
        }
        if(s[0][0]!='v')
        {
            printf("NO\n");
        }
        else if(m<4)
        {
            printf("NO\n");
        }
        else
        {
           if(m==4)
           {
             //  if(s[])
           }
        }
        if(v==1)
            printf("YES\n");

       printf("%s",s[0][0]);
    }
}
