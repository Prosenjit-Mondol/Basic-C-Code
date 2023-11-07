#include<stdio.h>
int main()
{
    int i,x,y,sum=0,t;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if(x==0 || y==0 || x<0 || y<0){
            goto end;
        }
        else if(x>y){
            t=x;
            x=y;
            y=t;
        }
         for(i=x;i<=y;i++){
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
    end:
    return 0;
}

