#include <stdio.h>
int find(int a,int b)
{
    if(b==0)
        return a;
    else
        return find(b,a%b);
}

void main()
{
    int i, n1, n2, j, hcf=1,lcm;
     printf("LCM of two numbers:\n ");
    printf("Input 1st number for LCM: ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &n2);


    int gcd=find(n1,n2);
    lcm=(n1*n2)/gcd;
    printf("\nThe LCM of %d and %d is : %d\n\n", n1, gcd, lcm);

}
