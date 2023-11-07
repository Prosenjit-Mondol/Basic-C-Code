#include<stdio.h>
int main()
{
    char s[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[0]=='Y' || s[0]=='y')
        {
            if(s[1]=='E' || s[1]=='e')
            {
               if(s[2]=='S' || s[2]=='s')
                printf("YES\n");
               else
                printf("NO\n");
            }
            else
            printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
