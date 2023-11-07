#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],sum=0;
    printf("Enter 2D array element:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("THIS MARTIX IS\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE OF THIS MATRIX BY USING OTHER MARTIX IS \n\n");
      for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             b[i][j]=a[i][j];
             printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
    return 0;
}
