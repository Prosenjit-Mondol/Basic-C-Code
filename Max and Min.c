#include<stdio.h>
int main()
{
    long int x,y,u,l,z;
    scanf("%ld %ld %ld",&x,&y,&z);
    if(x<y&&y<z){
        l=x;
        u=z;
    }
    else if(y<z&&z<x){
        l=y;
        u=x;
    }
    else if(z<x&&x<y){
        l=z;
        u=y;
    }
    printf("%d %d",l,u);
    return 0;
}
