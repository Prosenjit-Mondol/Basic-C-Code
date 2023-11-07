#include<stdio.h>
int main()
{
    int i,j=1,x;
    long long int y;
    scanf("%d%lld",&x,&y);
    if(1<x<20 && x<y<100000){
        for(i=1;i<=y;i++){
          for(;j<=x;j++){
            printf("%d ",j);
          }
          j=j+1;
        }
        printf("\n");
    }
    return 0;
}
