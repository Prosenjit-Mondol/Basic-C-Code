#include<stdio.h>
#include<string.h>
int main()
{
    int i,x=0;
    char a[500];
    for(i=1;i<=5;i++){
        scanf("%s",&a);
        if(a=='++X'||a=='X++')
            x=x+1;
        else if(a=='--X'||a=='X--')
            x=x-1;
    }
    printf("%d\n",x);
}
