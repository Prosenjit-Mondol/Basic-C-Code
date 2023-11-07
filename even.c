#include<stdio.h>
#include<string.h>
int main()
{
    long long int sum=0,n;
    scanf("%lld",&n);
    char s[n+10];
    scanf("%s",s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        if(s[i]%2==0)
        sum+=(i+1);
    }
    printf("%lld\n",sum);
    return 0;
}