#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3],sum,k;
    printf("Enter 1ST array element:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2ND array element:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("THIS 1ST MARTIX IS:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("THIS 2ND MARTIX IS:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                sum=0;
                for(k=0;k<3;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
        c[i][j]=sum;
        }
    }
     printf("THIS MULTIPLICATION MARTIX IS:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
