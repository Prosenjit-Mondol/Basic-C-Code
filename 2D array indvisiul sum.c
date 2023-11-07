#include<stdio.h>
int main()
{
    int i,j,a[300][300],sr,sc,p=1;
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
    for(i=0;i<3;i++){
        sr=sc=0;
        for(j=0;j<3;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sr%d=%d sc%d=%d\n",p,sr,p,sc);
        p++;
    }
    return 0;
}
