#include<stdio.h>
int main()
{
    int i,s=0,x,y;
    scanf("%d%d",&x,&y);
    while(y<=0)
    {
        scanf("%d",&y);
    }
    for(i=1;i<=y;i++){
        s+=x;
        x++;
    }
    printf("%d\n",s);
    return 0;
}
