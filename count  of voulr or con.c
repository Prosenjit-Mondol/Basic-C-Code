#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,cv=0,cc=0;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            cv++;
        }
        else{
            cc++;
        }
    }
    printf("total vowel is %d\n",cv);
    printf("total consonsnt is %d\n",cc);
    return 0;
}
