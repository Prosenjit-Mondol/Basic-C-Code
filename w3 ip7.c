#include<stdio.h>
#include<string.h>
int main()
{
    char f[50],l[50];
    int v;
    printf("Input your firstname:");
    scanf("%s",&f);
    printf("Input your lasttname:");
    scanf("%s",&l);
    printf("Input your year of birth:");
    scanf("%d",&v);
    printf("%s %s %d",f,l,v);
    return 0;
}
