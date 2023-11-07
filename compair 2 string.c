#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int valu;
    while(1)
    {
    gets(s1);
    gets(s2);
    valu=strcmp(s1,s2);
    if(valu==0){
        printf("This is same string\n");
    }
    else{
        printf("This is not a same string\n");
    }
    printf("The valu is %d\n",valu);
    }
    return 0;
}
