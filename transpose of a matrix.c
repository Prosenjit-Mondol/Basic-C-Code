#include<stdio.h>
int main()
{
    int i,j,a[3][5],sum=0;
    printf("Enter 2D array element:");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("THIS MARTIX IS\n");
     for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE OF THIS MATRIX IS \n\n");
     for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
