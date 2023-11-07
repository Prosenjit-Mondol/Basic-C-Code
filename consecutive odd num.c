#include<stdio.h>
int main()
{
    int count=0,i,n,x,s=0,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
       while(count<y){
        if(x%2!=0){
            s=s+x;
            count++;
        }
        x++;
       }
        printf("%d\n",s);
        s=0;
        count=0;
    }
    return 0;
}
