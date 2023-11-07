#include<stdio.h>
int main()
{
    int i,n,c=0;
    char s[100];

    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
