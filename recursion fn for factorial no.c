#include<stdio.h>

int main()
{
    int n;
    printf("Enter  poitive integer:\n");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n",n,multiplynumber(n));
    return 0;
}
int multiplynumber(int n)
{
    if(n>1)
    {
        return n*multiplynumber(n-1);
    }
    else{
        return 1;
        }
}
