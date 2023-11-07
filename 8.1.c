#include<stdio.h>
int main()
{
    int n=10,i,j,x[10],y[10];
    float m,c,total_x=0,total_y=0,total_xy=0,total_x2=0;
    printf("Enter the value of x\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the value of y\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<10;i++)
    {
       total_x+=x[i];
       total_y+=y[i];
        total_xy+=(x[i]*y[i]);
        total_x2+=(x[i]*x[i]);
    }
    m=((n*total_xy-(total_x*total_y))/(n*total_x2-total_x2));
    c=1/(n*(total_y-m*total_x));
    printf("The equation of straight line is:\n");
    printf("Y=%fX+%f\n",m,c);
    return 0;
}
