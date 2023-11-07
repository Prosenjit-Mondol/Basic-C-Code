#include<stdio.h>
int main()
{
    int n,i,s,a,b,temp;
    scanf("%d",&n);

    for(i = 1;i <= n;i++){
        scanf("%d %d",&a,&b);
        if(a<b){
        temp=a;
        a=b;
        b=temp;
        }
        while(a%b!=0){
            b=a%b;
        }
        printf("%d\n",b);
    }
    return 0;
}
