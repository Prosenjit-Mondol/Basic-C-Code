#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,j;
    float n;
    scanf("%f",&n);
    x=floor(n);
    for(j=1;j<=x;j++){
        for(i=1;i<=x;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
