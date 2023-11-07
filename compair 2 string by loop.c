#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int valu=0,i;
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            valu=1;
            break;
        }
    }
    if(valu==1){
        printf("Is not same\n");
    }
    else{
        printf("is same string\n");
    }
    return 0;
}
