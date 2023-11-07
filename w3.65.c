#include<stdio.h>
int main()
{
    int i,j,prime,c=0;
    for(i=2;i<200;i++){
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
            }
        }
        if(prime==1){
            printf("%5d ",i);
            c++;
            if(c==20){
                printf("\n");
            }
        }
    }
    return 0;
}
