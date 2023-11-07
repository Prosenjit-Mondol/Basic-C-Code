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
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\n%d\n",sum);
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("The 2D array position [%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
    return 0;
}
