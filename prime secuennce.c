#include<stdio.h>
int main()
{
    int c=0,i,j,n,priem;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        priem=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                priem=0;
                break;
            }
            else
                priem=1;
        }
        if(priem==1){
            printf("%d\t",i);
            c++;
        }
    }
        if(c==15)
            printf("\n");
    return 0;
}
