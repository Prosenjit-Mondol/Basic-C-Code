#include <stdio.h>
int main()
{
    int n,i;
    float x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%f %f",&x,&y);
    if(x==0){
        printf("0.0\n");
    }
    else if(y==0){
        printf("divisao impossivel\n");
    }
    else{
        printf("%.1f\n",(x/y));
    }
    }
    return 0;
}
