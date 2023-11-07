#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j,m,n;
    printf("Enter two string :\t");
    scanf("%s%s",s1,s2);
    printf("Enter the number of starting point and copy num :\t");
    scanf("%d %d",&n,&m);
    for(i=n,j=0;s2[i]!='\0' && j<m;j++,i++)
        s2[i]=s1[i];
    s2[i]='\0';
    printf("Copied substring: %s\n",s2);
    return 0;
}
