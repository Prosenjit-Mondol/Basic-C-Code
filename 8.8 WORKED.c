#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    printf("Enter a 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered martix is: \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
        printf("\n\nThe transpose of the matrix is:\n");
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<3;j++)
         {
                printf("%d\t",b[i][j]);
         }
         printf("\n");
        }
        return 0;
}
