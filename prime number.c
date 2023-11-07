#include <stdio.h>
int main()
{
    int n,i,j,prime;
    long long int x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&x);
        prime=0;
        for(j=2;j<=x/2;j++){
            if(x%j==0){
                prime=0;
                break;
            }
            else
                 prime=1;
        }
    if(prime==1){
        printf("Prime\n");
    }
    else{
        printf("Not Primo\n");
    }
    }
    return 0;
}

