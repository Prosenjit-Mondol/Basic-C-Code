#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="123456789";
    int i,j,k,v,m=0;
    for(i=0;i<5;i++)
    {
        for(j=4;j>i;j--)
            printf(" ");
        for(k=0,v=i;k<=i;k++,v++)
            printf("%c",str[v]);
        v=v-2;
        for(m=0;m<i;m++,v--)
            printf("%c",str[v]);
       printf("\n");
    }
}
