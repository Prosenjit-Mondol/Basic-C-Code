#include<stdio.h>
int findlargest(int *matrix,int row,int col)
{
    int i,j,large=*matrix;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if((*(matrix+i)+j)>large)
                large=(*(matrix+i)+j);
        }
    }
    return large;
}
int main()
{
    int m,n,i,j;
    printf("Enter the number of row and colum:\n");
    scanf("%d%d",&m,&n);
    int matrix[m][n];
    printf("Enter the element of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    }
    int largest=findlargest(&matrix,m,n);
    printf("Largest number of the matrix is:%d\n",largest);
    return 0;
}
