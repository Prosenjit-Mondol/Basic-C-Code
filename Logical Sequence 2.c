#include <stdio.h>
int main() {
    int x,y,i,j=0;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++)
    {
        j++;
        printf("%d",i);
        if(j==x || i == y)
        {
            printf("\n");
            j=0;
        }
        else
            printf(" ");
    }
    return 0;
}
