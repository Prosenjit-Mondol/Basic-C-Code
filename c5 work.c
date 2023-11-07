#include<stdio.h>
int main()
{
    char c;
    int v=1 ;
    c=' ';
    while(c!='\n')
    {
        c= getchar();
        printf("%d+%c\n",v,c);
        v++;
    }
    return 0;
}
