#include<stdio.h>
int x,y;
void exchange(){
   int c=x;
   x=y;
   y=c;
}
int main(){
    x=10;
    y=20;
    printf("%d\n%d\n",x,y);
    exchange();
    printf("%d\n%d\n",x,y);
    return 0;
}
