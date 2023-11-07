#include<stdio.h>
int main()
{
    char s[1000];
    int i,j,v=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i+=3)
    {
        if(s[i]=='a' && s[i+1]=='h')
            v=1;
        else if(s[i]=='h' && s[i+1]=='h')
            v=1;
        else if(s[i]=='h' && s[i+1]=='e')
            v=1;
        else if(s[i]=='e' && s[i+1]=='e')
            v=1;
        else if(s[i]=='e' && s[i+1]=='l')
            v=1;
        else if(s[i]=='l' && s[i+1]=='l')
            v=1;
        else if(s[i]=='l' && s[i+1]=='l')
            v=1;
        else if(s[i]=='l' && s[i+1]=='o')
            v=1;
        else if(s[i]=='o' && s[i+1]=='o')
            v=1;
        else if(s[i]=='o' && s[i+1]=='u')
            v=1;
        else if(s[i]=='o' && s[i+1]=='o')
            v=1;
        else if(s[i]=='o' && s[i+1]=='u')
            v=1;
        else if(s[i]=='u' && s[i+1]=='u')
            v=1;
        else
            v=0;
    }
    if(v==1)
        printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
