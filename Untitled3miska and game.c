#include<stdio.h>
int main()
{
    int i,j,n,m,c,sm=0,sc=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&m,&c);
        if(m<c)
        {
            sc++;
        }
        if(c<m)
        {
            sm++;
        }
    }
    if(sm>sc)
        printf("Mishka\n");
    else if(sm<sc)
        printf("Chris\n");
    else if(sm==sc)
        printf("Friendship is magic!^^\n");
    return 0;
}
