#include<stdio.h>
int main()
{
    int x,y;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if(x>0 && 0<y){
            printf("primeiro\n");
        }
        else if(x<0 && 0>y){
            printf("terceiro\n");
        }
        else if(x==0 || 0==y){
            goto end;
        }
        else if(x>0 && 0>y){
            printf("quarto\n");
        }
        else if(x<0 && 0<y){
            printf("segundo\n");
        }
    }
    end:
    return 0;
}
