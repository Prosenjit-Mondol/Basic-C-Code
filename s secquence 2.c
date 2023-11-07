#include<stdio.h>
int main()
{
    float s=0,j=1.0;
    int i;
    for(i=1;i<=39;i+=2){
       s=s+(i/j);
       j=j+j;
    }
    printf("%.2f\n",s);
    return 0;
}
