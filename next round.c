#include<stdio.h>
int main()
{
    int n,k,i,a[1000],c=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]>0){
            if(a[i]>=a[k]){
            c++;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
