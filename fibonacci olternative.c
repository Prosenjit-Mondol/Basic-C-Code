#include <stdio.h>
int main() {
    int n,i,n1,n2,t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            n1 = 0;
            printf("%d",n1);
        }
        else if(i==2)
        {
            n2 = 1;
            printf("%d",n2);
        }
        else
        {
            t = n1+n2;
            printf("%d",t);
            n1 = n2;
            n2 = t;
        }
        if(i==n)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
