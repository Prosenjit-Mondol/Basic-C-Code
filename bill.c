#include<stdio.h>
int main()
{
    int n,x[1000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}
