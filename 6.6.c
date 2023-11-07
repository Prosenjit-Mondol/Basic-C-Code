#include<stdio.h>
#include<math.h>
main()
{
    float i,j,z;
    //x[9][9];
    for(i=0;i<9;i++)
    {
        for(j=0;j<0.09;j+=0.01)
        {
            z=sqrt((i+1+j));
            printf("%.2f ",z);
        }printf("\n");
    }
}
