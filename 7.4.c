#include<stdio.h>
#include<math.h>
int main()
{
    long int v;
    int p,r,n;
    printf("Enter principle rate and time:\n");
    scanf("%d%d%d",&p,&r,&n);
    v=p*pow((1+r),n);
    printf("The investment value is %d\n",v);
    return 0;

}
