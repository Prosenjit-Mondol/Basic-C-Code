/*#include<stdio.h>
int main()
{
    int n,i,a[1000];
    double r,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=(double)a[i]/100;
    }
    r=(s/n)*100;
    printf("%.12lf\n",r);
    return 0;
}
*/
#include<stdio.h>
main()
{
    int i,x,y;
    float sum=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        sum=sum+y;
    }
    printf("%.12f",sum/x);
}
