#include<stdio.h>
void addmatrix(int *mat1,int *mat2,int *result,int row,int col)
{
    int totalelement=row*col;
    for(int i=0;i<totalelement;i++)
    {
        result[i]=mat1[i]+mat2[i];
    }
}
void printmatrix(int *matrix,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",matrix[i*col+j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("Enter the number of row and col: \n");
    scanf("%d%d",&row,&col);
    int mat1[row][col];
    int mat2[row][col];
    int result[row][col];
    printf("Enter the element of the first matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter the element of the second matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&mat2[i][j]);
    }
    addmatrix((int*)mat1,(int*)mat2,(int*)result, row, col);
    printmatrix((int*)result,row,col);
    return 0;
}
