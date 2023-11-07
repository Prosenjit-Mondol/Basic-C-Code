#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%y!=0){
        printf("Divission is not possible\n");
    }
    else{
        printf("Divission is possible\n");
    }
    return 0;
}
