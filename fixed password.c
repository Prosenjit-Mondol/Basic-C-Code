#include<stdio.h>
int main()
{
    long int x;
    while(1)
    {
        scanf("%ld",&x);
        if(x==1999){
            printf("Correct\n");
            goto end;
        }
        else{
            printf("Wrong\n");
        }
    }
    end:
    return 0;
}
