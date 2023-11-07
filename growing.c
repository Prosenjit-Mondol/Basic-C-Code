#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    while(1)
    {
        if(n==0){
        goto end;
        }
        else{
        for(i=1;i<=n;i++)
            printf("%d ",i);
            goto end;
        }
    }
    end:
        return 0;
}
