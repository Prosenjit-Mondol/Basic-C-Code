#include<stdio.h>
int main()
{
    int x,count=0,s=0,i;
    while(1)
    {
        scanf("%d",&x);
        if(x==0){
            goto end;
        }
        else{
            while(count<5)
            {
                if(x%2==0){
                    s+=x;count++;
                    //count++;
                }
                x++;
            }
        }
         printf("%d\n",s);
         s=0;
         count=0;
    }
    end:
        return 0;
}
