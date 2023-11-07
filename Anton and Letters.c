#include<stdio.h>
int main()
{
    char s[1000];
    int a[50],k,i,j,c=0;
    scanf("%s",s);
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]==',' || s[i]=='}')
        {
            k = s[i-1]-'0';
            if(a[k]==0 && k!=75)
                a[k]++, c++;
        }
    }
    return 0;
}
