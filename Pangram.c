#include<stdio.h>
int main()
{
    int c=0,n,i;
    char s[150],s1='a',s2='A';
    scanf("%d",&n);
    scanf("%s",s);
    if(n<26)
    {
        printf("NO\n");
        return 0;
    }
    for(i=0;i<26;i++)
    {
        for(int m=0;m<n;m++)
        {
            if((s1+i)==s[m] || (s2+i)==s[m])
            {
                c++;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }

        printf("%d\n",c);
    }
    if(c==26)
        printf("YES\n");
    return 0;
}
