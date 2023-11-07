/*#include<stdio.h>
void fibseries(int n,int a,int b)
{
    if(n>0)
    {
        printf("%d ",a);
        fibseries(n-1,b,a+b);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms in the fibonacci series");
    scanf("%d",&n);
    fibseries(n,0,1);
    return  0;
}
*/

#include<stdio.h>
int fib(int x)
{
    static y=1,z=0;
    if (z==0)
    printf(" %d",z);
    if (z==0)
    printf(" %d",y);
    int t=y;
    y=z+y;
    z=t;
    if(x==1)
        return 1;
    printf(" %d",y);
    fib(x-1);

}
int main()
{
    int x;
    scanf("%d",&x);
    //printf("1 ");
    fib(x-1);
}
