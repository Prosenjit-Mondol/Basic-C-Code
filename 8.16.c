#include<stdio.h>
int main()
{
    int i,j,a[3][5],s=0;
    printf("Enter the elements of two-dimensional arrays:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }
    printf("%d\n",s);
    return 0;
}
