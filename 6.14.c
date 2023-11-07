#include <stdio.h>
int main()
{
    int i,j,prime;
    for(i=101;i<=200;i+=2){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
            break;
            }
            else{
                prime=1;
            }
        }
    if(prime==1){
        printf("%d\t",i);
    }
    }
    return 0;
}
