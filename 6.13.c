#include<stdio.h>
int main()
{
    int i,s=0,count=0;
    for(i=0;i<=100;i++){
        if(i%6==0 && i%4!=0){
            s+=i;
            count++;
        }
    }
    printf("The count number is %d\n",count);
    printf("The sum of all integer is %d",s);
    return 0;
}
